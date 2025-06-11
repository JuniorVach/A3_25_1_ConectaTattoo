<template>
  <section class="hero">
    <div class="background-text">TATTOO</div>
    <div class="left-column">
      <div class="diamond-wrapper"></div>
    </div>

    <img src="../assets/tattoo1.jpg" alt="Tatuagem" />

    <div class="right-column">
      <h1><strong>Conecta</strong>Tattoo</h1>
      <p>
        Connecting artists and enthusiasts<br />
        Explore the latest trends<br />
        Discover unique designs
      </p>
      <button class="cta">PROCURE AGORA</button>
      <div class="vertical-text"></div>
      <div class="arrow">↓</div>
    </div>
  </section>
</template>

<script setup></script>

<style scoped>
.hero {
  display: flex;
  width: 97vw;
  height: 100vh;
  background: white;
  overflow: hidden;
  position: relative;
}

/* ===== LEFT SIDE ===== */
.left-column {
  flex: 1;
  position: relative;
  display: flex;
  align-items: center;
  justify-content: flex-start;
  padding-left: 2rem;
}

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

.background-text {
  position: absolute;
  font-size: 10rem;
  color: rgba(0, 0, 0, 0.08);
  z-index: 1;
  font-weight: bold;
  top: 20%;
  pointer-events: none;
  font-family: var(--almendra);
  letter-spacing: 10px;
  text-orientation: mixed;
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
