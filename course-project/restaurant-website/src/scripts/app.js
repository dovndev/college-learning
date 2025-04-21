document.addEventListener('DOMContentLoaded', () => {
    const pages = {
        home: 'pages/home.html',
        menu: 'pages/menu.html',
        about: 'pages/about.html',
        contact: 'pages/contact.html'
    };

    const loadPage = (page) => {
        fetch(pages[page])
            .then(response => {
                if (!response.ok) {
                    throw new Error('Network response was not ok');
                }
                return response.text();
            })
            .then(html => {
                document.getElementById('content').innerHTML = html;
            })
            .catch(error => {
                console.error('There was a problem with the fetch operation:', error);
            });
    };

    const setupNavigation = () => {
        const navLinks = document.querySelectorAll('nav a');
        navLinks.forEach(link => {
            link.addEventListener('click', (event) => {
                event.preventDefault();
                const page = event.target.getAttribute('href').substring(1);
                loadPage(page);
            });
        });
    };

    loadPage('home');
    setupNavigation();
});

document.addEventListener("DOMContentLoaded", () => {
    const reveals = document.querySelectorAll(".reveal");
  
    const revealOnScroll = () => {
      const triggerBottom = window.innerHeight * 0.85;
      reveals.forEach(el => {
        const boxTop = el.getBoundingClientRect().top;
        if (boxTop < triggerBottom) {
          el.classList.add("visible");
        }
      });
    };
  
    window.addEventListener("scroll", revealOnScroll);
    revealOnScroll(); // run on page load
  });
  