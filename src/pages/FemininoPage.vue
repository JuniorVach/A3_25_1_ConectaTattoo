<template>
  <section id="principal">
    <figure id="linha-imagens" v-if="femalePosts.length">
      <div
        v-for="post in femalePosts"
        :key="post.id"
        class="image-wrapper"
      >
        <img 
          :src="post.image"
          :alt="post.title"
          loading="lazy"
          cass="tattoo-image"
        />
      </div>
    </figure>
    <p v-else>Carregando</p>
  </section>
  <AppFooter />

  <!-- Componente ImageModal -->
  <ImageModal v-model="isModalOpen" :image="selectedImage" />
</template>

<script setup>
import { onMounted, ref } from 'vue';

const femalePosts = ref([]);

onMounted(async () => {
  try {
    const res = await fetch('http://localhost:3000/postagens');
    const posts = await res.json();

    femalePosts.value = posts.filter(post => post.gender === 'feminino');
  } catch (error) {
    console.error('Erro ao buscar postagens:', error);
  }
});
</script>

<style scoped>
section#principal {
  background-color: var(--q-dark);
  padding: 20px;
  display: flex;
  justify-content: center;
  flex-wrap: wrap;
  gap: 20px;
}

.image-wrapper {
  flex: 0 0 300px;
}

.tattoo-image {
  width: 300px;
  height: 300px;
  object-fit: cover;
  border-radius: 10px;
  cursor: pointer;
  transition: transform 0.3s ease;
}

.tattoo-image:hover {
  transform: scale(1.05);;
}
</style>