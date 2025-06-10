<template>
  <q-page>
    <HeroSection />
    <section id="style-ad">
      <h1>Teste</h1>
      <TattooCircles />
    </section>
  </q-page>
</template>

<script setup>
import HeroSection from '../components/HeroSection.vue';
import TattooCircles from '../components/TattooCircles.vue';
</script>

<style scoped>
#style-ad {
  background-color: rgb(200, 61, 61);
  text-align: center;
}
</style>
