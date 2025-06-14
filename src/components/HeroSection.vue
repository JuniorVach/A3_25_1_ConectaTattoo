<template>
  <q-page class="hero-page" :style="heroBackgroundStyle">
    <video autoplay muted loop class="hero-video">
      <source src="https://assets.mixkit.co/videos/preview/mixkit-black-ink-in-water-1225-large.mp4" type="video/mp4">
    </video>

    <div class="hero-content">
      <div class="title-font">
        <h1 class="hero-title gothic-font">
          <span class="title-wrapper">
            Conecta<br />Tattoo
            <span class="title-icon">☠</span>
          </span>
        </h1>

        <p class="hero-subtitle">
          A <span class="highlight-dark">PELE</span> é nossa <span class="highlight-light">tela</span>
        </p>

        <div class="button-wrapper">
          <q-btn
            class="submit-button"
            label="Envie sua arte"
            @click="submitArt"
          />
        </div>
      </div>
    </div>
  </q-page>
</template>

<script setup>
import { computed } from 'vue';

const heroBackgroundStyle = computed(() => ({
  backgroundImage: "url('https://www.transparenttextures.com/patterns/dark-wood.png')",
  minHeight: 'calc(100vh - 64px)'
}));
</script>

<style lang="scss" scoped>
@import url('https://fonts.googleapis.com/css2?family=Germania+One&family=UnifrakturMaguntia&display=swap');

/* === Layout Principal === */
.hero-page {
  position: relative;
  background-color: #2D2D2D; // bg-gothic
  overflow: hidden;
  border-bottom: 4px solid #8A0303; // border-blood
}

/* === Vídeo de fundo === */
.hero-video {
  width: 100%;
  height: 100%;
  position: absolute;
  inset: 0;
  opacity: 0.4;
  object-fit: cover;
}

/* === Container de Conteúdo Central === */
.hero-content {
  position: absolute;
  inset: 0;
  display: flex;
  justify-content: center;
  align-items: center;
  text-align: center;
}

/* === Fontes === */
.gothic-font {
  font-family: 'UnifrakturMaguntia', cursive;
  text-shadow: 3px 3px 0px #000,
               6px 6px 0px rgba(138, 3, 3, 0.5),
               0 0 20px rgba(220, 20, 60, 0.7);
  letter-spacing: -0.05em;
  position: relative;
}

.title-font {
  font-family: 'Germania One', cursive;
}

/* === Título Principal === */
.hero-title {
  font-size: 14rem;
  color: #DC143C; // crimson
  letter-spacing: 0.25rem;
  font-family: 'UnifrakturMaguntia', cursive;
  transform: rotate(10deg);
  transform-origin: center center;
  position: relative;
  top: -40px;
  margin: 0;
}

/* === Wrapper interno do título */
.title-wrapper {
  display: inline-block;
  position: relative;
}

/* === Ícone do título */
.title-icon {
  position: absolute;
  bottom: -1rem;
  right: 0;
  font-size: 3rem;
}

/* === Subtítulo === */
.hero-subtitle {
  margin-top: 4rem;
  font-size: 3rem;
  font-weight: bold;
  color: #8A0303; // blood
  max-width: 48rem;
  margin-left: auto;
  margin-right: auto;
  filter: drop-shadow(0 2px 2px rgba(0, 0, 0, 1));
}

/* Destaques */
.highlight-dark {
  color: #DC143C;
}

.highlight-light {
  color: #fff;
  text-decoration: underline wavy;
}

/* === Botão === */
.button-wrapper {
  margin-top: 2rem;
}

.submit-button {
  background-color: #8A0303; // bg-blood
  color: #fff;
  padding: 0.75rem 2rem;
  font-size: 1.125rem;
  font-weight: bold;
  border: 2px solid #DC143C;
  border-radius: 0.5rem;
  transition: all 0.3s ease;
}

.submit-button:hover {
  background-color: #DC143C; // hover:bg-crimson
  transform: scale(1.05);
}
</style>
