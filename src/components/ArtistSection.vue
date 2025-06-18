<template>
    <div class="artist-spotlight-section-container">
        <h2 class="title-font artist-spotlight-heading">Artistas em Destaque</h2>

        <div class="artist-grid">
            <ArtistCard v-for="data in artistas" :key="data.id" :artist="artistas" to="/perfil" />
        </div>
    </div>
</template>

<script setup>
import { onMounted, ref } from 'vue';
import ArtistCard from './ArtistCard.vue';
import { useRoute } from 'vue-router';

const artistas = ref ([]);


onMounted(async () => {
    try {
        const res = await fetch('http://localhost:3000/artistas')
        const data = await res.json();
        artistas.value = data;
    } catch (error) {
    console.error('Erro ao buscar artistas:', error);
  };
})
</script>

<style scoped>
@import url('https://fonts.googleapis.com/css2?family=Germania+One&display=swap');

.title-font {
    font-family: 'Germania One', cursive;
}

.artist-spotlight-section-container {
    margin-top: 80px;
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

.artist-spotlight-heading {
    font-size: 2.25rem;
    line-height: 2.5rem;
    color: #DC143C;
    margin-bottom: 32px;
    text-align: center;
}

.artist-grid {
    display: grid;
    grid-template-columns: 1fr;
    gap: 32px;
    justify-content: center;

    @media (min-width: 768px) {
        grid-template-columns: repeat(3, 1fr);
    }
}
</style>