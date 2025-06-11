<template>
  <section class="hero">
    <div class="diamond-wrapper"></div>

    <div class="imagem1">
      <img src="../assets/tatuagens/masculino/Mtattoo1.png" alt="Tatuagem1" />
    </div>

    <div class="imagem2">
      <img src="../assets/tatuagens/masculino/Mtattoo2.png" alt="Tatuagem2" />
    </div>

    <div class="imagem3">
      <img src="../assets/tatuagens/masculino/Mtattoo3.png" alt="Tatuagem3" />
    </div>
  </section>
</template>

<script setup></script>

<style scoped>
.imagem1 {
  position: left;
  left: 20px;
  height: 10%;
}

.imagem2 {
  position: right;
  right: 20px;

  height: 10%;
  width: 10%;
}

.imagem3 {
  position: relative;
  right: 20px;

  height: 10%;
  width: 10%;
}

.hero {
  display: flex;
  width: 97vw;
  height: 100vh;
  background: white;
  overflow: hidden;
  position: relative;
}

/* ===== LEFT SIDE ===== */

.diamond-wrapper {
  width: 300px;
  height: 600px;
  clip-path: polygon(50% 0%, 100% 50%, 50% 100%, 0% 50%);
  overflow: hidden;
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
  z-index: 2;
  color: gray;
}

.diamond-image {
  width: 100%;
  height: 100%;
  object-fit: cover;
}

/* ===== RIGHT SIDE ===== */
.right-column {
  flex: 1;
  position: relative;
  display: flex;
  flex-direction: column;
  justify-content: center;
  font-family: var(--caudex);
  align-items: center;
}

h1 {
  font-size: 2.5rem;
  font-family: var(--unifrakturmaguntia);
  margin-bottom: 1rem;
}

p {
  font-size: 1rem;
  line-height: 1.6;
  margin-bottom: 2rem;
}

.cta {
  padding: 0.75rem 2rem;
  background: black;
  color: white;
  border: none;
  border-radius: 1.5rem;
  font-weight: bold;
  font-size: 1rem;
  cursor: pointer;
  width: 70%;
}

.vertical-text {
  position: absolute;
  right: 1rem;
  top: 50%;
  transform: translateY(-50%) rotate(180deg);
  writing-mode: vertical-rl;
  font-weight: bold;
  font-size: 1rem;
  color: #555;
}

.arrow {
  position: absolute;
  right: 2rem;
  bottom: 1rem;
  font-size: 2rem;
  color: #222;
}
</style>
