<template>
    <q-page class="auth-page-container flex flex-center">
        <!--BACKGROUND-->
        <RegisterScreenBackground />

        <q-card class="auth-card gothic-border">
            <div class="header-section">
                <FlameIcon class="flame-left" />
                <h1 class="gothic-title blood-drop">Conecta Tattoo</h1>
                <FlameIcon class="flame-right" />
            </div>

            <div class="tabs-container">
                <q-btn
                    flat
                    dense
                    label="LOGIN"
                    class="tab-button"
                    :class="{ 'tab-active': tab === 'login' }"
                    @click="tab = 'login'"
                />
                <q-btn
                    flat
                    dense
                    label="CADASTRO"
                    class="tab-button"
                    :class="{ 'tab-active': tab === 'cadastro' }"
                    @click="tab = 'cadastro'"
                />
            </div>

            <div class="form-container">
                <q-tab-panels v-model="tab" animated class="q-py-md bg-transparent">
                    <q-tab-panel name="login">
                        <q-form @submit="handleLogin" class="q-gutter-md">
                            <q-input
                                filled
                                v-model="loginForm.email"
                                label="Email"
                                type="email"
                                required
                                dark
                                standout="bg-dark-opacity"
                                label-color="grey-4"
                            >
                                <template v-slot:prepend>
                                    <q-icon name="email" color="red-10" />
                                </template>
                            </q-input>

                            <q-input
                                filled
                                v-model="loginForm.password"
                                label="Senha"
                                type="password"
                                required
                                dark
                                standout="bg-dark-opacity"
                                label-color="grey-4"
                            >
                                <template v-slot:prepend>
                                    <q-icon name="lock" color="red-10" />
                                </template>
                            </q-input>

                            <div>
                                <q-btn label="Entrar" type="submit" color="red-10" class="full-width btn-gothic" />
                            </div>
                        </q-form>
                    </q-tab-panel>

                    <q-tab-panel name="cadastro">
                        <q-form @submit="handleCadastro" class="q-gutter-md">
                            <q-input
                                filled
                                v-model="cadastroForm.nome"
                                label="Nome Completo"
                                required
                                dark
                                standout="bg-dark-opacity"
                                label-color="grey-4"
                            >
                                <template v-slot:prepend>
                                    <q-icon name="person" color="red-10" />
                                </template>
                            </q-input>

                            <q-input
                                filled
                                v-model="cadastroForm.email"
                                label="Email"
                                type="email"
                                required
                                dark
                                standout="bg-dark-opacity"
                                label-color="grey-4"
                            >
                                <template v-slot:prepend>
                                    <q-icon name="email" color="red-10" />
                                </template>
                            </q-input>

                            <q-input
                                filled
                                v-model="cadastroForm.password"
                                label="Senha"
                                type="password"
                                required
                                dark
                                standout="bg-dark-opacity"
                                label-color="grey-4"
                            >
                                <template v-slot:prepend>
                                    <q-icon name="lock" color="red-10" />
                                </template>
                            </q-input>

                            <div>
                                <q-btn label="Cadastrar" type="submit" color="red-10" class="full-width btn-gothic" />
                            </div>
                        </q-form>
                    </q-tab-panel>
                </q-tab-panels>
            </div>

            <div class="skull-corner-icon">
                <q-icon name="fas fa-skull" class="skull-icon"/>
            </div>
        </q-card>
    </q-page>
</template>

<script setup>
import { ref, reactive, watch } from 'vue';
import { useRoute, useRouter } from 'vue-router';
import usersData from 'src/db/users.json';
import RegisterScreenBackground from 'src/components/RegisterScreenBackground.vue';
import FlameIcon from 'src/components/FlameIcon.vue';

const route = useRoute();
const router = useRouter();

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

// Logs para depuração
console.log('Conteúdo de usersData:', usersData);
const fixedTattooArtist = usersData.find(user => user.role === 'tattooArtist');
console.log('fixedTattooArtist encontrado:', fixedTattooArtist);


async function handleLogin() {
  if (fixedTattooArtist &&
      loginForm.email === fixedTattooArtist.email &&
      loginForm.password === fixedTattooArtist.password) {
    localStorage.setItem('isLoggedInTatuador', 'true');
    alert('Login realizado com sucesso!');
    router.push('/post');
  } else {
    alert('Email ou senha inválidos.');
  }
}

async function handleCadastro() {
  alert('Funcionalidade de cadastro não implementada para persistir dados localmente. Use o login para demonstração.');
  cadastroForm.nome = '';
  cadastroForm.email = '';
  cadastroForm.password = '';
  tab.value = 'login';
}
</script>

<style scoped>
@import url('https://fonts.googleapis.com/css2?family=Black+Ops+One&family=Creepster&family=Eater&display=swap');

.auth-page-container {
    min-height: 100vh;
    background-color: #0a0a0a;
    color: #fff;
    font-family: 'Arial', sans-serif;
    background-image:
        radial-gradient(circle at 10% 20%, rgba(#DC143C, 0.1) 0%, transparent 20%),
        radial-gradient(circle at 90% 80%, rgba(#DC143C, 0.1) 0%, transparent 20%);
    display: flex;
    align-items: center;
    justify-content: center;
    padding: 16px;
}

.auth-card {
    width: 100%;
    max-width: 448px;
    background-color: rgba(0, 0, 0, 0.8);
    border-radius: 8px;
    box-shadow: 0 10px 15px rgba(0,0,0,0.1), 0 4px 6px rgba(0,0,0,0.05);
    overflow: hidden;
    padding: 32px;
    position: relative;
    z-index: 1;
}

.gothic-border {
    border: 1px solid #333;
    position: relative;

    &::before,
    &::after {
        content: '';
        position: absolute;
        width: 20px;
        height: 20px;
        border: 1px solid #DC143C;
    }

    &::before {
        top: -1px;
        left: -1px;
        border-right: none;
        border-bottom: none;
    }

    &::after {
        bottom: -1px;
        right: -1px;
        border-left: none;
        border-top: none;
    }
}

.header-section {
    display: flex;
    justify-content: center;
    align-items: center;
    margin-bottom: 32px;
}

.gothic-title {
    font-size: 2.25rem;
    font-family: 'UnifrakturMaguntia', cursive;
    line-height: 2.5rem;
    text-align: center;
    text-shadow: 0 0 10px #DC143C, 0 0 20px #8B0000;
    margin: 0 16px;
}

.tabs-container {
    display: flex;
    border-bottom: 1px solid rgba(51, 51, 51, 0.8);
    margin-bottom: 24px;

    .tab-button {
        flex: 1;
        padding-top: 8px;
        padding-bottom: 8px;
        font-weight: bold;
        color: #6b7280;
        text-transform: uppercase;
        transition: all 0.3s ease;

        &:hover {
            color: #DC143C;
        }
    }

    .tab-active {
        border-bottom: 3px solid #DC143C;
        color:#DC143C;
        text-shadow: 0 0 5px rgba(220, 20, 60, 0.5);
    }
}

.form-container {
    padding-bottom: 20px;
}

.skull-corner-icon {
    position: absolute;
    bottom: 16px;
    right: 16px;

    .skull-icon {
        font-size: 1.25rem;
        filter: drop-shadow(0 0 5px #DC143C);
        color: #DC143C;
    }
}

/* Adicionado para inputs */
.q-field--filled.q-input--dark .q-field__control,
.q-field--filled.q-input--dark .q-field__native {
  color: white; /* Cor do texto digitado */
}

.bg-dark-opacity {
  background-color: rgba(0, 0, 0, 0.6); /* Cor de fundo para inputs */
}

.btn-gothic {
    font-family: 'Black Ops One', cursive;
    text-shadow: 0 0 5px rgba(220, 20, 60, 0.5);
}
</style>
