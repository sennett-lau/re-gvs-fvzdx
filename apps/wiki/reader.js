(() => {
  const key = 'rg-gvs-fvzdx:wiki-theme';
  const root = document.documentElement;
  const apply = value => {
    root.dataset.theme = value === 'light' ? 'light' : 'dark';
    const button = document.querySelector('[data-theme-toggle]');
    if (button) {
      const text = root.dataset.theme === 'dark' ? '淺色模式' : '深色模式';
      button.textContent = text;
      button.setAttribute('aria-label', '切換至' + text);
    }
  };
  try { apply(localStorage.getItem(key)); } catch { apply('dark'); }
  document.addEventListener('DOMContentLoaded', () => {
    const button = document.querySelector('[data-theme-toggle]');
    apply(root.dataset.theme);
    button.hidden = false;
    button.addEventListener('click', () => {
      apply(root.dataset.theme === 'dark' ? 'light' : 'dark');
      try { localStorage.setItem(key, root.dataset.theme); } catch {}
    });
    const headings = [...document.querySelectorAll('article h2')];
    const links = [...document.querySelectorAll('.outline a')];
    if ('IntersectionObserver' in window) {
      const observer = new IntersectionObserver(entries => {
        for (const entry of entries) if (entry.isIntersecting) {
          for (const link of links) {
            if (link.hash === '#' + entry.target.id) link.setAttribute('aria-current', 'location');
            else link.removeAttribute('aria-current');
          }
        }
      }, {rootMargin: '-80px 0px -65% 0px'});
      headings.forEach(heading => observer.observe(heading));
    }
  });
  addEventListener('storage', event => { if (event.key === key || event.key === null) apply(event.newValue); });
})();
