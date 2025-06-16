<template>
  <q-header class="bg-gothic text-white border-b-2 border-blood relative">
    <div class="absolute -bottom-0.5 left-0 right-0 h-3 overflow-hidden">
      <div class="absolute h-full w-full flex justify-evenly">
        <div class="w-1 h-4 bg-blood rounded-b-full transform -translate-y-2/4"></div>
        <div class="w-2 h-6 bg-blood rounded-b-full transform -translate-y-1/4"></div>
        <div class="w-1 h-3 bg-blood rounded-b-full"></div>
        <div class="w-1.5 h-5 bg-blood rounded-b-full transform -translate-y-1/2"></div>
        <div class="w-1 h-3 bg-blood rounded-b-full transform -translate-y-1/4"></div>
        <div class="w-1 h-4 bg-blood rounded-b-full"></div>
      </div>
    </div>

    <q-toolbar class="max-w-7xl mx-auto px-4 sm:px-6 lg:px-8">
      <q-toolbar-title class="flex items-center">
        <router-link to="/" class="gothic-font text-3xl text-crimson">Conecta Tattoo</router-link>
      </q-toolbar-title>

      <q-space />

      <div class="hidden md:block">
        <q-list class="flex items-baseline space-x-4">
          <q-item
            clickable
            v-ripple
            to="/gallery"
            class="text-crimson hover:bg-gothic px-3 py-2 rounded-md text-sm font-medium"
          >
            <q-item-section>Gallery</q-item-section>
          </q-item>
          <q-item
            clickable
            v-ripple
            to="/artists"
            class="text-white hover:text-crimson px-3 py-2 rounded-md text-sm font-medium"
          >
            <q-item-section>Artists</q-item-section>
          </q-item>
          <q-item
            clickable
            v-ripple
            to="/styles"
            class="text-white hover:text-crimson px-3 py-2 rounded-md text-sm font-medium"
          >
            <q-item-section>Styles</q-item-section>
          </q-item>
          <q-item
            clickable
            v-ripple
            to="/stories"
            class="text-white hover:text-crimson px-3 py-2 rounded-md text-sm font-medium"
          >
            <q-item-section>Stories</q-item-section>
          </q-item>
          <q-item
            clickable
            v-ripple
            to="/about"
            class="text-white hover:text-crimson px-3 py-2 rounded-md text-sm font-medium"
          >
            <q-item-section>About</q-item-section>
          </q-item>
        </q-list>
      </div>

      <div class="hidden md:block ml-4 flex items-center md:ml-6">
        <q-btn
          flat
          round
          dense
          icon="search"
          class="text-white hover:text-crimson"
          aria-label="Search"
        />
        <q-btn
          flat
          round
          dense
          icon="cloud_upload"
          class="ml-3 text-white hover:text-crimson"
          aria-label="Upload"
        />
        <q-btn
          flat
          round
          dense
          icon="person"
          class="ml-3 text-white hover:text-crimson"
          aria-label="Account"
        />
      </div>

      <div class="-mr-2 flex md:hidden">
        <q-btn
          flat
          dense
          round
          icon="menu"
          @click="toggleMobileMenu"
          class="inline-flex items-center justify-center p-2 rounded-md text-white hover:text-crimson focus:outline-none"
          aria-label="Open main menu"
        />
      </div>
    </q-toolbar>

    <q-drawer
      v-model="mobileMenuOpen"
      side="right"
      overlay
      behavior="mobile"
      class="bg-gothic text-white"
    >
      <q-list class="px-2 pt-2 pb-3 space-y-1 sm:px-3">
        <q-item
          clickable
          v-ripple
          to="/gallery"
          class="text-crimson block px-3 py-2 rounded-md text-base font-medium"
        >
          <q-item-section>Gallery</q-item-section>
        </q-item>
        <q-item
          clickable
          v-ripple
          to="/artists"
          class="text-white hover:text-crimson block px-3 py-2 rounded-md text-base font-medium"
        >
          <q-item-section>Artists</q-item-section>
        </q-item>
        <q-item
          clickable
          v-ripple
          to="/styles"
          class="text-white hover:text-crimson block px-3 py-2 rounded-md text-base font-medium"
        >
          <q-item-section>Styles</q-item-section>
        </q-item>
        <q-item
          clickable
          v-ripple
          to="/categorias/feminino"
          class="text-white hover:text-crimson block px-3 py-2 rounded-md text-base font-medium"
        >
          <q-item-section>Feminino</q-item-section>
        </q-item>
        <q-item
          clickable
          v-ripple
          to="/categorias/masculino"
          class="text-white hover:text-crimson block px-3 py-2 rounded-md text-base font-medium"
        >
          <q-item-section>Masculino</q-item-section>
        </q-item>
      </q-list>
      <div class="pt-4 pb-3 border-t border-blood px-4 flex items-center">
        <q-btn
          flat
          round
          dense
          icon="search"
          class="p-1 rounded-full text-white hover:text-crimson focus:outline-none mr-3"
        />
        <q-btn
          flat
          round
          dense
          icon="cloud_upload"
          class="p-1 rounded-full text-white hover:text-crimson focus:outline-none mr-3"
        />
        <q-btn
          flat
          round
          dense
          icon="person"
          class="p-1 rounded-full text-white hover:text-crimson focus:outline-none"
        />
      </div>
    </q-drawer>
  </q-header>
</template>

<script setup>
import { ref } from 'vue'

const mobileMenuOpen = ref(false)

const toggleMobileMenu = () => {
  mobileMenuOpen.value = !mobileMenuOpen.value
}
</script>

<style lang="scss">
@import url('https://fonts.googleapis.com/css2?family=Germania+One&family=UnifrakturMaguntia&display=swap');

.gothic-font {
  font-family: 'UnifrakturMaguntia', cursive;
  text-shadow:
    3px 3px 0px #000,
    6px 6px 0px rgba(138, 3, 3, 0.5),
    0 0 20px rgba(220, 20, 60, 0.7);
  letter-spacing: -0.05em;
  position: relative;
  font-size: 37px;
}

.gothic-font::after {
  content: '†';
  position: absolute;
  right: -15px;
  top: 0;
  color: #dc143c;
  font-size: 1.5em;
  transform: rotate(15deg);
}

.title-font {
  font-family: 'Germania One', cursive;
}

.bg-blood {
  background-color: #8a0303;
}
.text-blood {
  color: #8a0303;
}
.border-blood {
  border-color: #8a0303;
}

.bg-crimson {
  background-color: #dc143c;
}
.text-crimson {
  color: #dc143c;
}

.bg-dark {
  background-color: #1a1a1a;
}
.text-dark {
  color: #1a1a1a;
}

.bg-gothic {
  background-color: #2d2d2d;
}
.text-gothic {
  color: #2d2d2d;
}
</style>
