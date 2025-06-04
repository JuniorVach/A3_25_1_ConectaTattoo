<template>
  <q-layout view="hHh lpR fFf">
    <q-header elevated class="bg-dark text-white">
      <q-toolbar>
        <q-btn flat dense round icon="menu" @click="toggleLeftDrawer" class="q-mr-sm" />

        <q-toolbar-title>
          <router-link to="/" class="toolbar-link">
            <q-img :src="LogoTattoo" class="logo-tattoo" />
            <span class="title">Conecta Tattoo</span>
          </router-link> 
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

        <q-input
          dense
          filled
          debounce="300"
          v-model="search"
          placeholder="Search"
          class="q-mr-sm"
        />
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
import LogoTattoo from '../assets/logo_conecta-tattoo.png'

const search = ref('')

function onSearch() {
  console.log('Searching:', search.value)
}

function toggleLeftDrawer() {
  // Função para abrir o menu lateral (se necessário)
}
</script>

<style scoped>
.logo-tattoo {
  width: 50px;
  height: 50px;
  padding: 25px;
}

.title {
  color: #c6c6c6;
  font-family: 'Courier New', Courier, monospace;
  font-size: 1.5rem;
  padding: 10px;
  font-weight: bold;
  text-shadow:
    0.5px 0.5px 0 #8B0000,
    -0.5px -0.5px 0 #8B0000,
    0.5px -0.5px 0 #8B0000,
    -0.5px 0.5px 0 #8B0000;
}
.toolbar-link {
  display: flex;
  text-decoration: none;
  cursor: pointer;
}
</style>
