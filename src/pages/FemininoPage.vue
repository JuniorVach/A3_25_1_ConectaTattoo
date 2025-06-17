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

// --- IMPORTAÇÃO DIRETA DAS IMAGENS FEMININAS ---
// Certifique-se de que estes caminhos e nomes de arquivo correspondem exatamente aos seus assets.
import Ftattoo1 from '../assets/tatuagens/feminino/Ftattoo1.png';
import Ftattoo2 from '../assets/tatuagens/feminino/Ftattoo2.png';
import Ftattoo3 from '../assets/tatuagens/feminino/Ftattoo3.png';
import Ftattoo4 from '../assets/tatuagens/feminino/Ftattoo4.png';
import Ftattoo5 from '../assets/tatuagens/feminino/Ftattoo5.png';
import Ftattoo6 from '../assets/tatuagens/feminino/Ftattoo6.png';
import Ftattoo7 from '../assets/tatuagens/feminino/Ftattoo7.png';
import Ftattoo8 from '../assets/tatuagens/feminino/Ftattoo8.png';
import Ftattoo9 from '../assets/tatuagens/feminino/Ftattoo9.png';
import Ftattoo10 from '../assets/tatuagens/feminino/Ftattoo10.png';
import Ftattoo11 from '../assets/tatuagens/feminino/Ftattoo11.png';
import Ftattoo12 from '../assets/tatuagens/feminino/Ftattoo12.png';
// --- FIM DA IMPORTAÇÃO DIRETA ---

// Variáveis para controlar o modal
const isModalOpen = ref(false);
const selectedImage = ref({});

// Dados para as imagens de tatuagem feminina
const tattooImages = ref([
  [
    { src: Ftattoo1, alt: 'Flores no braço', artist: 'Artista A', description: 'Delicadas flores coloridas no braço.', style: 'Aquarela', location: 'Braço' },
    { src: Ftattoo2, alt: 'Peixe nas costas', artist: 'Artista B', description: 'Tatuagem de peixe ornamental nas costas.', style: 'Oriental', location: 'Costas' },
    { src: Ftattoo3, alt: 'Flores no ombro', artist: 'Artista C', description: 'Ramalhete de flores em tons pastel.', style: 'Fine Line', location: 'Ombro' },
    { src: Ftattoo4, alt: 'Leão florido nas costas', artist: 'Artista D', description: 'Leão com elementos florais em realismo.', style: 'Realismo', location: 'Costas' },
  ],
  [
    { src: Ftattoo5, alt: 'Ramos no peito', artist: 'Artista E', description: 'Ramos delicados com folhas cobrindo o peito.', style: 'Botânico', location: 'Peito' },
    { src: Ftattoo6, alt: 'Flores na costela', artist: 'Artista F', description: 'Longas hastes florais na região da costela.', style: 'Minimalista', location: 'Costela' },
    { src: Ftattoo7, alt: 'Índia no quadril', artist: 'Artista G', description: 'Retrato de índia com traços finos.', style: 'Blackwork', location: 'Quadril' },
    { src: Ftattoo8, alt: 'Frase no ombro', artist: 'Artista H', description: 'Citação inspiradora em caligrafia.', style: 'Escrita', location: 'Ombro' },
  ],
  [
    { src: Ftattoo9, alt: 'Lotus no pulso', artist: 'Artista I', description: 'Pequena flor de lótus, símbolo de pureza.', style: 'Pontilhismo', location: 'Pulso' },
    { src: Ftattoo10, alt: 'Lotus atrás da orelha', artist: 'Artista J', description: 'Lótus discreta atrás da orelha.', style: 'Micro Realismo', location: 'Atrás da Orelha' },
    { src: Ftattoo11, alt: 'Tartaruga marinha no braço', artist: 'Artista K', description: 'Tartaruga com detalhes intrincados.', style: 'Geométrico', location: 'Braço' },
    { src: Ftattoo12, alt: 'Medusa no braço', artist: 'Artista L', description: 'Medusa com expressão marcante.', style: 'Mitologia', location: 'Braço' },
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
  width: 300px; /* Largura definida para as imagens da galeria */
  height: 300px; /* Altura definida para as imagens da galeria */
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

/* Regras para quando a imagem for o alvo (mantidas, mas o modal é o foco principal) */
#principal #primeira-linha-imagens img:target,
#principal #segunda-linha-imagens img:target,
#principal #terceira-linha-imagens img:target {
  position: fixed;
  width: 50%;
  top: 20px;
  left: 25%;
}
</style>
