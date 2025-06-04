<script setup>
import NavBar from '../components/NavBar.vue'
import HeroSection from '../components/HeroSection.vue'
import AdSection from 'src/components/AdSection.vue';
</script>

<template>
  <main>
    <NavBar />
    <HeroSection />
    <section id="style-ad">
      <AdSection />
    </section>
  </main>
</template>

<style scoped>

.circles {
  margin-top: 250px;
}
</style>
