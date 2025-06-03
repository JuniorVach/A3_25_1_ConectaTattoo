<template>
  <q-layout view="hHh lpR fFf">
    <q-header elevated class="bg-dark text-white">
      <q-toolbar>

        <q-btn flat dense round icon="menu" @click="toggleLeftDrawer" class="q-mr-sm" />

        <q-toolbar-title>
          Conecta Tattoo
        </q-toolbar-title>

        <q-btn flat label="Home" to="/" />
        <q-btn flat label="Artes" to="/artes" />

        <q-btn flat round icon="account_circle">
          <q-menu>
            <q-list style="min-width: 150px">
              <q-item clickable v-close-popup>
                <q-item-section>Action</q-item-section>
              </q-item>
              <q-item clickable v-close-popup>
                <q-item-section>Another Action</q-item-section>
              </q-item>
              <q-separator />
              <q-item clickable v-close-popup>
                <q-item-section>Something else here</q-item-section>
              </q-item>
            </q-list>
          </q-menu>
        </q-btn>

        <q-space />

        <q-input dense filled debounce="300" v-model="search" placeholder="Search" class="q-mr-sm" />
        <q-btn flat icon="search" @click="onSearch" />
      </q-toolbar>
    </q-header>

    <!-- Aqui vai o conteúdo das páginas -->
    <q-page-container>
      <router-view />
    </q-page-container>
  </q-layout>
</template>

<script setup>
import { ref } from 'vue'

const search = ref('')

function onSearch () {
  console.log('Searching:', search.value)
}

function toggleLeftDrawer () {
  // Função para abrir o menu lateral (se necessário)
}
</script>

<style scoped>
/* Estilos personalizados aqui */
</style>
