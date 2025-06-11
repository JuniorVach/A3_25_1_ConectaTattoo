<template>
  <q-header elevated class="bg-dark text-white">
    <q-toolbar>
      <q-toolbar-title>
        <router-link to="/" class="toolbar-link">
          <q-img :src="LogoTattoo" class="logo-tattoo" />
          <span class="title">Conecta Tattoo</span>
        </router-link>
      </q-toolbar-title>

      <q-btn flat label="Home" to="/" />
      <q-btn-dropdown flat label="Categorias">
        <q-list>
          <q-item clickable v-close-popup @click="goToCategoria('masculino')">
            <q-item-section>
              <q-item-label>Masculino</q-item-label>
            </q-item-section>
          </q-item>

          <q-item clickable v-close-popup @click="goToCategoria('feminino')">
            <q-item-section>
              <q-item-label>Feminino</q-item-label>
            </q-item-section>
          </q-item>
        </q-list>
      </q-btn-dropdown>

      <q-btn flat round icon="account_circle">
        <q-menu>
          <q-list style="min-width: 150px">
            <q-item clickable v-close-popup @click="goToAuth('login')">
              <q-item-section>Login</q-item-section>
            </q-item>
            <q-item clickable v-close-popup @click="goToAuth('cadastro')">
              <q-item-section>Cadastrar</q-item-section>
            </q-item>
            <q-separator />
          </q-list>
        </q-menu>
      </q-btn>

      <q-space />
    </q-toolbar>
  </q-header>
</template>

<script setup>
import { useRouter } from 'vue-router'
import LogoTattoo from '../assets/logo_conecta-tattoo.png'

const router = useRouter()

function goToCategoria(tipo) {
  router.push(`/categorias/${tipo}`)
}

function goToAuth(tipo) {
  router.push(`/tatuador?tab=${tipo}`)
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
    0.5px 0.5px 0 #8b0000,
    -0.5px -0.5px 0 #8b0000,
    0.5px -0.5px 0 #8b0000,
    -0.5px 0.5px 0 #8b0000;
}
.toolbar-link {
  display: flex;
  text-decoration: none;
  cursor: pointer;
}
</style>
