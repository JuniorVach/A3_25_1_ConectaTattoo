<template>
  <q-layout view="hHh lpR fFf">
    <NavBar />

    <q-page-container>
      <q-page>
        <router-view />
      </q-page>
    </q-page-container>
  </q-layout>
</template>

<script setup>
import NavBar from '../components/NavBar.vue'
</script>

<style scoped>
#style-ad {
  background-color: rgb(200, 61, 61);
  text-align: center;
}
</style>
