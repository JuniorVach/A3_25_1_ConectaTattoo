<template>
  <section id="principal">
    <figure v-for="(imageRow, rowIndex) in tattooImages" :key="rowIndex" :id="`linha-imagens-${rowIndex}`">
      <img
        v-for="image in imageRow"
        :key="image.src"
        :src="image.src"
        :alt="image.alt"
        @click="openImageModal(image)"
      />
    </figure>
  </section>
  <AppFooter />

  <!-- Componente ImageModal -->
  <ImageModal v-model="isModalOpen" :image="selectedImage" />
</template>

<script setup>
import { ref } from 'vue';
import AppFooter from 'src/components/AppFooter.vue';
import ImageModal from '../components/ImageModal.vue'; // Importar o novo componente modal

// --- IMPORTAÇÃO DIRETA DAS IMAGENS ---
// Certifique-se de que estes caminhos e nomes de arquivo correspondem exatamente aos seus assets.
import Mtattoo1 from '../assets/tatuagens/masculino/Mtattoo1.png';
import Mtattoo2 from '../assets/tatuagens/masculino/Mtattoo2.png';
import Mtattoo3 from '../assets/tatuagens/masculino/Mtattoo3.png';
import Mtattoo4 from '../assets/tatuagens/masculino/Mtattoo4.png';
import Mtattoo5 from '../assets/tatuagens/masculino/Mtattoo5.png';
import Mtattoo6 from '../assets/tatuagens/masculino/Mtattoo6.png';
import Mtattoo7 from '../assets/tatuagens/masculino/Mtattoo7.png';
import Mtattoo8 from '../assets/tatuagens/masculino/Mtattoo8.png';
import Mtattoo9 from '../assets/tatuagens/masculino/Mtattoo9.png';
import Mtattoo10 from '../assets/tatuagens/masculino/Mtattoo10.png';
import Mtattoo11 from '../assets/tatuagens/masculino/Mtattoo11.png';
import Mtattoo12 from '../assets/tatuagens/masculino/Mtattoo12.png';
// --- FIM DA IMPORTAÇÃO DIRETA ---


// Variáveis para controlar o modal
const isModalOpen = ref(false);
const selectedImage = ref({});

// Dados para as imagens de tatuagem
// AGORA UTILIZANDO AS VARIÁVEIS IMPORTADAS PARA OS 'src'
const tattooImages = ref([
  [
    { src: Mtattoo1, alt: 'Leão e Jesus', artist: 'Artista X', description: 'Tatuagem detalhada de leão e figura religiosa.', style: 'Realismo Preto e Cinza', location: 'Braço' },
    { src: Mtattoo2, alt: 'Frase na perna', artist: 'Artista Y', description: 'Citação inspiradora com fonte cursiva.', style: 'Escrita', location: 'Perna' },
    { src: Mtattoo3, alt: 'Águia no braço', artist: 'Artista Z', description: 'Design de águia em estilo tradicional.', style: 'Neo Tradicional', location: 'Braço' },
    { src: Mtattoo4, alt: 'Poseidon', artist: 'Artista Alpha', description: 'Representação de Poseidon com detalhes de água.', style: 'Realismo', location: 'Costas' },
  ],
  [
    { src: Mtattoo5, alt: 'Barco na costela', artist: 'Artista Beta', description: 'Cena de barco à vela no mar.', style: 'Fine Line', location: 'Costela' },
    { src: Mtattoo6, alt: 'Cruz e asas e Blessed', artist: 'Artista Gama', description: 'Símbolos religiosos com texto "Blessed".', style: 'Blackwork', location: 'Braço' },
    { src: Mtattoo7, alt: 'Tattoo no peito', artist: 'Artista Delta', description: 'Design complexo no peito.', style: 'Geométrico', location: 'Peito' },
    { src: Mtattoo8, alt: 'Tattoo nas costas', artist: 'Artista Epsilon', description: 'Grande tatuagem nas costas.', style: 'Oriental', location: 'Costas' },
  ],
  [
    { src: Mtattoo9, alt: 'Tattoo no braço', artist: 'Artista Zeta', description: 'Braço todo tatuado.', style: 'Manga Fechada', location: 'Braço' },
    { src: Mtattoo10, alt: 'Tattoo na panturrilha', artist: 'Artista Eta', description: 'Detalhe de tatuagem na panturrilha.', style: 'Sketch', location: 'Panturrilha' },
    { src: Mtattoo11, alt: 'Tattoo na mão', artist: 'Artista Theta', description: 'Design na parte de cima da mão.', style: 'Ornamental', location: 'Mão' },
    { src: Mtattoo12, alt: 'Coruja', artist: 'Artista Iota', description: 'Coruja detalhada no braço.', style: 'Black & Grey', location: 'Braço' },
  ]
]);

// Função para abrir o modal
const openImageModal = (image) => {
  selectedImage.value = image;
  isModalOpen.value = true;
};
</script>

<style scoped>
section#principal {
  background-color: var(--q-dark);
  padding-top: 20px;
}

img {
  width: 300px;
  height: 300px;
  margin-bottom: 20px;
  border-radius: 10px;
  transition: transform 0.3s ease-in-out, box-shadow 0.3s ease-in-out;
  cursor: pointer;
}

img:hover {
  transform: scale(1.05);
  box-shadow: 0 0 20px rgba(255, 255, 255, 0.3);
}

figure {
  display: flex;
  justify-content: center;
  align-items: center;
  gap: 30px;
}

#principal figure img:target {
  position: fixed;
  width: 50%;
  top: 20px;
  left: 25%;
}
</style>
