<template>
    <q-footer class="app-footer">
        <div class="footer-content-wrapper">
            <div class="footer-grid">
                <div>
                    <h3 class="gothic-font footer-brand-title">Conecta Tattoo</h3>
                    <p class="footer-brand-description">A sanctuary for the most beautiful body art.</p>
                </div>

                <div>
                    <h4 class="footer-heading">Explore</h4>
                    <ul class="footer-links-list">
                        <li><router-link to="/gallery" class="footer-link">Gallery</router-link></li>
                        <li><router-link to="/artists" class="footer-link">Artists</router-link></li>
                        <li><router-link to="/styles" class="footer-link">Styles</router-link></li>
                        <li><router-link to="/stories" class="footer-link">Stories</router-link></li>
                    </ul>
                </div>

                <div>
                    <h4 class="footer-heading">Company</h4>
                    <ul class="footer-link-list">
                        <li><router-link to="/" class="footer-link">Sobre Nós</router-link></li>
                        <li><router-link to="/" class="footer-link">Contato</router-link></li> <!-- CORRIGIDO: tp para to -->
                        <li><router-link to="/" class="footer-link">Política de Privacidade</router-link></li>
                        <li><router-link to="/" class="footer-link">Termos de Serviço</router-link></li>
                    </ul>
                </div>

                <div>
                    <h4 class="footer-heading">Conecte-se</h4>
                    <div class="social-icons">
                        <a href="#" class="social-icon" aria-label="Instagram"><q-icon name="fa-brands fa-instagram" /></a>
                        <a href="#" class="social-icon" aria-label="Facebook"><q-icon name="fa-brands fa-facebook-f" /></a>
                        <a href="#" class="social-icon" aria-label="Twitter"><q-icon name="fa-brands fa-x-twitter" /></a>
                        <a href="#" class="social-icon" aria-label="Pinterest"><q-icon name="fa-brands fa-pinterest-p" /></a>
                    </div>

                    <div class="copyright">
                        <p>2025 Conecta Tattoo. Todos os direitos reservados.</p>
                    </div>
                </div>
            </div>
        </div>
    </q-footer>
</template>

<script setup>
</script>

<style scoped>
@import url('https://fonts.googleapis.com/css2?family=Germania+One&family=UnifrakturMaguntia&display=swap');

.gothic-font {
    font-family: 'UnifrakturMaguntia', cursive;
    text-shadow: 3px 3px 0px #000,
                 6px 6px 0px rgba(138, 3, 3, 0.5),
                 0 0 20px rgba(220, 20, 60, 0.7);
    letter-spacing: -0.05em;
    position: relative;
}

.gothic-font::after {
    content: '†';
    position: absolute;
    right: -15px;
    top: 0;
    color: #DC143C;
    font-size: 1.5em;
    transform: rotate(15deg);
}

.app-footer {
    background-color: #000;
    padding-top: 48px;
    padding-bottom: 48px;
    margin-top: 80px;
    color: white;
}

.footer-content-wrapper {
    max-width: 1280px;
    margin-left: auto;
    margin-right: auto;
    padding: 0 16px;

    @media (min-width: 640px) {
        padding-left: 24px;
        padding-right: 24px;
    }
    @media (min-width: 1024px) {
        padding-left: 32px;
        padding-right: 32px;
    }
}

.footer-grid {
    display: grid;
    grid-template-columns: 1fr;
    gap: 32px;

    @media (min-width: 768px) {
        grid-template-columns: repeat(4, 1fr);
    }

    div {
        text-align: left;
    }

    .footer-brand-title {
        font-size: 2.25rem;
        line-height: 2.5rem;
        color: #DC143C;
        margin-bottom: 16px;
        margin-top: 0;
    }

    .footer-brand-description {
        color: #9ca3af;
        font-size: 0.875rem;
    }

    .footer-heading {
        color:#DC143C;
        font-weight: bold;
        margin-bottom: 16px;
        margin-top: 0;
    }

    .footer-links-list {
        list-style: none;
        padding: 0;
        margin: 0;
        display: flex;
        flex-direction: column;
        gap: 8px;

        .footer-link {
            color:#9ca3af;
            font-size: 0.875rem;
            text-decoration: none;
            transition: color 0.3s ease;

            &:hover {
                color: white;
            }
        }
    }

    .social-icons {
        color:#9ca3af;
        font-size: 1.5rem;
        transition: color 0.3s ease;

        &:hover {
            color:#DC143C;
        }
    }
}

.copyright {
    margin-top: 24px;
    color:#9ca3af;
    font-size: 0.75rem;
}
</style>
