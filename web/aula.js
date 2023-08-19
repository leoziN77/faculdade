function showContent(contentId) {
    const contents = document.querySelectorAll('.content');
    contents.forEach(content => {
        content.style.display = 'none';
    });

    const selectedContent = document.getElementById(contentId);
    if (selectedContent) {
        selectedContent.style.display = 'block';
    }
  }

  document.addEventListener("DOMContentLoaded", function() {
    const currentHash = window.location.hash.substring(1);
    if (currentHash) {
        showContent(currentHash);
    }

    const sidebarItems = document.querySelectorAll('.menu-item');
    sidebarItems.forEach(item => {
        item.addEventListener('click', function() {
            const contentId = this.getAttribute('data-content');
            if (contentId) {
                showContent(contentId);
            }
        });
    });
  });
