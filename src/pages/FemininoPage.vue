<template>
  <section id="principal">
    <!-- Imagens Estáticas Locais -->
    <figure
      v-for="(imageRow, rowIndex) in tattooImages"
      :key="'local-' + rowIndex"
      :id="`linha-imagens-${rowIndex}`"
    >
      <img
        v-for="image in imageRow"
        :key="image.src"
        :src="image.src"
        :alt="image.alt"
        class="tattoo-image"
        @click="openImageModal(image)"
      />
    </figure>

    <!-- Imagens de API -->
    <figure v-if="femalePosts.length" id="linha-imagens-api">
      <div
        v-for="post in femalePosts"
        :key="post.id"
        class="image-wrapper"
      >
        <img
          :src="post.image"
          :alt="post.title"
          class="tattoo-image"
          @click="openImageModal({
            src: post.image,
            alt: post.title,
            artist: post.artist,
            description: post.description,
            style: post.style,
            location: post.location,
          })"
        />
      </div>
    </figure>

    <p v-else>Carregando...</p>
  </section>

  <AppFooter />

  <!-- Modal para qualquer imagem -->
  <ImageModal v-model="isModalOpen" :image="selectedImage" />
</template>

<script setup>
import { ref, onMounted } from 'vue'
import AppFooter from 'src/components/AppFooter.vue'
import ImageModal from '../components/ImageModal.vue'

// Modal
const isModalOpen = ref(false)
const selectedImage = ref({})

// Função do modal
const openImageModal = (image) => {
  selectedImage.value = image
  isModalOpen.value = true
}

// Imagens locais
import Ftattoo1 from '../assets/tatuagens/feminino/Ftattoo1.png'
import Ftattoo2 from '../assets/tatuagens/feminino/Ftattoo2.png'
import Ftattoo3 from '../assets/tatuagens/feminino/Ftattoo3.png'
import Ftattoo4 from '../assets/tatuagens/feminino/Ftattoo4.png'
import Ftattoo5 from '../assets/tatuagens/feminino/Ftattoo5.png'
import Ftattoo6 from '../assets/tatuagens/feminino/Ftattoo6.png'
import Ftattoo7 from '../assets/tatuagens/feminino/Ftattoo7.png'
import Ftattoo8 from '../assets/tatuagens/feminino/Ftattoo8.png'
import Ftattoo9 from '../assets/tatuagens/feminino/Ftattoo9.png'
import Ftattoo10 from '../assets/tatuagens/feminino/Ftattoo10.png'
import Ftattoo11 from '../assets/tatuagens/feminino/Ftattoo11.png'
import Ftattoo12 from '../assets/tatuagens/feminino/Ftattoo12.png'

const tattooImages = ref([
  [
    {
      src: Ftattoo1,
      alt: 'Leão e Jesus',
      artist: 'Artista X',
      description: 'Tatuagem detalhada de leão e figura religiosa.',
      style: 'Realismo Preto e Cinza',
      location: 'Braço',
    },
    {
      src: Ftattoo2,
      alt: 'Frase na perna',
      artist: 'Artista Y',
      description: 'Citação inspiradora com fonte cursiva.',
      style: 'Escrita',
      location: 'Perna',
    },
    {
      src: Ftattoo3,
      alt: 'Águia no braço',
      artist: 'Artista Z',
      description: 'Design de águia em estilo tradicional.',
      style: 'Neo Tradicional',
      location: 'Braço',
    },
    {
      src: Ftattoo4,
      alt: 'Poseidon',
      artist: 'Artista Alpha',
      description: 'Representação de Poseidon com detalhes de água.',
      style: 'Realismo',
      location: 'Costas',
    },
  ],
  [
    {
      src: Ftattoo5,
      alt: 'Barco na costela',
      artist: 'Artista Beta',
      description: 'Cena de barco à vela no mar.',
      style: 'Fine Line',
      location: 'Costela',
    },
    {
      src: Ftattoo6,
      alt: 'Cruz e asas e Blessed',
      artist: 'Artista Gama',
      description: 'Símbolos religiosos com texto "Blessed".',
      style: 'Blackwork',
      location: 'Braço',
    },
    {
      src: Ftattoo7,
      alt: 'Tattoo no peito',
      artist: 'Artista Delta',
      description: 'Design complexo no peito.',
      style: 'Geométrico',
      location: 'Peito',
    },
    {
      src: Ftattoo8,
      alt: 'Tattoo nas costas',
      artist: 'Artista Epsilon',
      description: 'Grande tatuagem nas costas.',
      style: 'Oriental',
      location: 'Costas',
    },
  ],
  [
    {
      src: Ftattoo9,
      alt: 'Tattoo no braço',
      artist: 'Artista Zeta',
      description: 'Braço todo tatuado.',
      style: 'Manga Fechada',
      location: 'Braço',
    },
    {
      src: Ftattoo10,
      alt: 'Tattoo na panturrilha',
      artist: 'Artista Eta',
      description: 'Detalhe de tatuagem na panturrilha.',
      style: 'Sketch',
      location: 'Panturrilha',
    },
    {
      src: Ftattoo11,
      alt: 'Tattoo na mão',
      artist: 'Artista Theta',
      description: 'Design na parte de cima da mão.',
      style: 'Ornamental',
      location: 'Mão',
    },
    {
      src: Ftattoo12,
      alt: 'Coruja',
      artist: 'Artista Iota',
      description: 'Coruja detalhada no braço.',
      style: 'Black & Grey',
      location: 'Braço',
    },
  ],
])

// Imagens da API
const femalePosts = ref([])

onMounted(async () => {
  try {
    const res = await fetch('http://localhost:3000/postagens')
    const posts = await res.json()
    femalePosts.value = posts.filter(post => post.gender === 'feminino')
  } catch (error) {
    console.error('Erro ao buscar postagens:', error)
  }
})
</script>

<style scoped>
section#principal {
  background-color: var(--q-dark);
  padding: 20px;
  display: flex;
  flex-direction: column;
  gap: 30px;
  align-items: center;
}

figure {
  display: flex;
  justify-content: center;
  flex-wrap: wrap;
  gap: 30px;
}

img {
  width: 300px;
  height: 300px;
  border-radius: 10px;
  margin-bottom: 20px;
  cursor: pointer;
  transition:
    transform 0.3s ease-in-out,
    box-shadow 0.3s ease-in-out;
}

.tattoo-image:hover {
  transform: scale(1.05);
  box-shadow: 0 0 20px rgba(255, 255, 255, 0.3);
}
</style>
