<template>
  <q-page class="flex flex-center bg-grey-2">
    <q-card class="q-pa-md shadow-2 my_card" bordered>
      <q-card-section class="text-center">
        <div class="text-h6 text-dark text-bold">Área do Tatuador</div>
      </q-card-section>

      <q-tabs
        v-model="tab"
        dense
        class="text-grey"
        active-color="red-10"
        indicator-color="red-10"
        align="justify"
        narrow-indicator
      >
        <q-tab name="login" label="Login" />
        <q-tab name="cadastro" label="Cadastro" />
      </q-tabs>

      <q-separator />

      <q-tab-panels v-model="tab" animated class="q-py-md">
        <q-tab-panel name="login">
          <q-form @submit="handleLogin" class="q-gutter-md">
            <q-input
              filled
              v-model="loginForm.email"
              label="Email"
              type="email"
            />

            <q-input
              filled
              v-model="loginForm.password"
              label="Senha"
              type="password"
            />

            <div>
              <q-btn label="Entrar" type="submit" color="red-10" class="full-width" />
            </div>
          </q-form>
        </q-tab-panel>

        <q-tab-panel name="cadastro">
          <q-form @submit="handleCadastro" class="q-gutter-md">
            <q-input
              filled
              v-model="cadastroForm.nome"
              label="Nome Completo"
            />

            <q-input
              filled
              v-model="cadastroForm.email"
              label="Email"
              type="email"
            />

            <q-input
              filled
              v-model="cadastroForm.password"
              label="Senha"
              type="password"
            />

            <div>
              <q-btn label="Cadastrar" type="submit" color="red-10" class="full-width" />
            </div>
          </q-form>
        </q-tab-panel>
      </q-tab-panels>
    </q-card>
  </q-page>
</template>

<script setup>
import { ref, reactive, watch } from 'vue';
import { useRoute } from 'vue-router';

const route = useRoute();
const tab = ref('login');

watch(() => route.query.tab, (newTab) => {
  if (newTab === 'login' || newTab === 'cadastro') {
    tab.value = newTab;
  }
}, { immediate: true });

const loginForm = reactive({
  email: '',
  password: ''
});

const cadastroForm = reactive({
  nome: '',
  email: '',
  password: ''
});

function handleLogin() {
  console.log('Tentativa de Login:', loginForm);
}

function handleCadastro() {
  console.log('Dados de Cadastro:', cadastroForm);
  cadastroForm.nome = '';
  cadastroForm.email = '';
  cadastroForm.password = '';
  tab.value = 'login';
}
</script>

<style scoped>
.my_card {
  width: 100%;
  max-width: 400px;
}
</style>
