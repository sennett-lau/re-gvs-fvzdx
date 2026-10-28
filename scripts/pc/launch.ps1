param(
  [Parameter(Mandatory=$true)][string]$Config,
  [Parameter(Mandatory=$true)][string]$Node,
  [Parameter(Mandatory=$true)][string]$Runner,
  [Parameter(Mandatory=$true)][string]$TaskName
)
$ErrorActionPreference='Stop'
$ProgressPreference='SilentlyContinue'
if ($TaskName -notmatch '^Rvzdx-[a-zA-Z0-9_-]+$') { throw 'Use a unique Rvzdx- task name' }
if (Get-ScheduledTask -TaskName $TaskName -ErrorAction SilentlyContinue) { throw 'Task already exists; refusing to overwrite it' }
$Config=(Resolve-Path $Config).Path
$Node=(Resolve-Path $Node).Path
$Runner=(Resolve-Path $Runner).Path
$user=(Get-CimInstance Win32_ComputerSystem).UserName
if (!$user) { throw 'No interactive desktop user is logged in' }
$action=New-ScheduledTaskAction -Execute $Node -Argument "`"$Runner`" `"$Config`"" -WorkingDirectory (Split-Path $Config)
$principal=New-ScheduledTaskPrincipal -UserId $user -LogonType Interactive -RunLevel Limited
$settings=New-ScheduledTaskSettingsSet -ExecutionTimeLimit (New-TimeSpan -Minutes 65) -AllowStartIfOnBatteries -DontStopIfGoingOnBatteries
Register-ScheduledTask -TaskName $TaskName -Action $action -Principal $principal -Settings $settings | Out-Null
@{task=$TaskName; config=$Config; runner=$Runner; node=$Node; created=[DateTime]::UtcNow.ToString('o')} | ConvertTo-Json | Set-Content ($Config + '.owned-task.json')
Start-ScheduledTask -TaskName $TaskName
"Started $TaskName"
