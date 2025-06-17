<template>
  <q-dialog v-model="visible" @hide="onHide">
    <q-card class="image-modal-card">
      <q-img :src="image.src" class="image-display" :alt="image.alt" />

      <q-card-section class="q-card-section-content">
        <div class="flex items-center justify-between q-mb-sm">
          <div class="text-h6 text-crimson">{{ image.alt }}</div>
          <!-- Botão 'X' no canto oposto com cor 'blood' -->
          <q-btn flat round icon="close" color="blood" @click="closeModal" />
        </div>
        <div class="text-gothic-light text-body2">
          <p>Tatuador: <strong>{{ image.artist }}</strong></p>
          <p v-if="image.description">{{ image.description }}</p>
          <p v-if="image.style">Estilo: {{ image.style }}</p>
          <p v-if="image.location">Local: {{ image.location }}</p>
        </div>
      </q-card-section>
    </q-card>
  </q-dialog>
</template>

<script setup>
import { defineProps, defineEmits, ref, watch } from 'vue';

const props = defineProps({
  modelValue: Boolean,
  image: Object,
});

const emit = defineEmits(['update:modelValue', 'close']);

const visible = ref(props.modelValue);

watch(() => props.modelValue, (newValue) => {
  visible.value = newValue;
});

watch(visible, (newValue) => {
  if (!newValue) {
    emit('update:modelValue', false);
  }
});

const closeModal = () => {
  visible.value = false;
  emit('close');
};

const onHide = () => {
  emit('update:modelValue', false);
};
</script>

<style scoped>
.image-modal-card {
  /* O card se ajusta ao conteúdo, mas com limites */
  width: auto;
  /* max-width foi ajustado para acomodar a nova largura da imagem + padding */
  max-width: 500px; /* (450px da imagem + padding) */
  max-height: 90vh; /* Máximo 90% da altura da viewport */
  background-color: #2d2d2d;
  color: #fff;
  display: flex;
  flex-direction: column;
  overflow: auto;
  /* Sombra de caixa adicionada ao card */
  box-shadow: 0 0 15px rgba(255, 255, 255, 0.2);
}

.q-card-section-content {
  background-color: #2d2d2d;
  display: flex;
  flex-direction: column;
}

.image-display {
  width: 425px; /* Largura fixa da área da imagem (500px - 10%) */
  height: 425px; /* Altura fixa da área da imagem (500px - 10%) */
  object-fit: contain; /* Garante que a imagem inteira seja visível sem cortar, ajustando-se à área fixa */
  background-color: #000;
  margin: auto; /* Centraliza a imagem horizontal e verticalmente dentro da área fixa */
  display: block; /* Garante que 'margin: auto' funcione */
}

.text-gothic-light {
  color: #c6c6c6;
}

.text-crimson { color: #dc143c; }
.text-blood { color: #8a0303; }
</style>
