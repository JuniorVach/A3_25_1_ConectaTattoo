<template>
  <q-layout view="hHh lpR fFf">
    <q-header elevated :class="$q.dark.isActive ? 'bg-primary' : 'bg-black'">
        <q-toolbar>
          <q-btn flat @click="drawer = !drawer" round dense icon="menu" />
          <q-toolbar-title>ConectaTattoo</q-toolbar-title>
          <q-input dense filled debounce="300" v-model="search" placeholder="Search" class="q-mr-sm user-input" />
          <q-btn flat icon="search" @click="onSearch" />
        </q-toolbar>
      </q-header>

        <q-drawer
        v-model="drawer"
        show-if-above
        :width="200"
        :breakpoint="500"
        >
        <q-scroll-area class="fit">
          <q-list padding class="menu-list">
            <q-item clickable v-ripple>
              <q-item-section avatar>
                <q-icon name="inbox" />
              </q-item-section>

              <q-item-section>
                Inbox
              </q-item-section>
            </q-item>

            <q-item active clickable v-ripple>
              <q-item-section avatar>
                <q-icon name="star" />
              </q-item-section>

              <q-item-section>
                Star
              </q-item-section>
            </q-item>

            <q-item clickable v-ripple>
              <q-item-section avatar>
                <q-icon name="send" />
              </q-item-section>

              <q-item-section>
                Send
              </q-item-section>
            </q-item>

            <q-item clickable v-ripple>
              <q-item-section avatar>
                <q-icon name="drafts" />
              </q-item-section>

              <q-item-section>
                Drafts
              </q-item-section>
            </q-item>
          </q-list>
        </q-scroll-area>
      </q-drawer>
        
        <q-toolbar-title>
          Conecta Tattoo
        </q-toolbar-title>

        <q-space />
    <q-page-container>
      <router-view />
    </q-page-container>
  </q-layout>
</template>

<script setup>
import { ref } from 'vue'

const search = ref('')

const drawer = ref(false)

function onSearch () {
  console.log('Searching:', search.value)
}
</script>

<style scoped>
.user-input input {
  color: white;
}
</style>
