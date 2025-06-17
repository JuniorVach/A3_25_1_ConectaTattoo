<template>
  <q-card dark bordered class="tattoo-card full-height column">
    <q-img :src="tattoo.img" :ratio="1" class="col">
      <div class="absolute-full text-subtitle2 flex flex-center transparent-overlay">
        <q-btn push round color="primary" icon="fas fa-expand" />
      </div>
    </q-img>

    <q-card-section>
      <div class="text-h6 text-white text-weight-bold">{{ tattoo.title }}</div>
      <div class="text-subtitle2 text-grey-5">{{ tattoo.style }}</div>
    </q-card-section>

    <q-separator dark />

    <q-card-actions>
      <span class="text-accent text-caption q-ml-xs">{{ tattoo.date }}</span>
      <q-space />
      <div class="text-grey-5 text-caption row items-center q-gutter-sm">
        <span class="flex items-center"><q-icon name="fas fa-heart" color="primary" class="q-mr-xs" /> {{ tattoo.likes }}</span>
        <span class="flex items-center"><q-icon name="fas fa-comment" class="q-mr-xs" /> {{ tattoo.comments }}</span>
      </div>
    </q-card-actions>
  </q-card>
</template>

<script setup>
defineProps({
  tattoo: {
    type: Object,
    required: true,
  },
});
</script>

<style lang="scss" scoped>
.transparent-overlay {
  background-color: rgba(0,0,0,0.5);
  opacity: 0;
  transition: opacity 0.3s;
}
.tattoo-card:hover .transparent-overlay {
  opacity: 1;
}
</style>