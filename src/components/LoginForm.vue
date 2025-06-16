<template>
    <div class="login-form-wrapper">
        <div class="form-field">
            <label class="form-label">E-mail ou Nome de Usuário</label>
            <q-input
                v-model="loginData.username"
                type="text"
                placeholder="email@email.com"
                class="input-field"
                hide-bottom-space
                :rules="[val => (val && val.length > 0) || 'Campo Obrigatório']"
            >
                <template v-slot:control>
                    <input
                        type="text"
                        :value="loginData.username"
                        @input="loginData.username = $event.target.value"
                        placeholder="email@email.com"
                        class="custom-input-field"
                    >
                </template>
        </q-input>
        </div>

        <div class="form-field">
            <label class="form-label">Senha</label>
            <q-input
                v-model="loginData.password"
                type="password"
                placeholder="senha"
                class="input-field"
                input-class="input-text"
                hide-bottom-space
                :rules="[val => (val && val.length > 0) || 'Campo Obrigatório']"
            >
                <template v-slot:control>
                    <input
                        type="password"
                        :value="loginData.password"
                        @input="loginData.password = $event.target.value"
                        placeholder="senha"
                        class="custom-input-field"
                        >
                </template>
        </q-input>
        </div>

        <div class="flex-row-spaced">
            <q-checkbox 
                v-model="loginData.rememberMe"
                label="Lembrar-me"
                color="#DC143C"
                class="remember-me-checkbox"
            />
            <a href="#" class="forgot-password-link" @click.prevent="forgotPassword"> Esqueceu a senha?</a>
        </div>

        <q-btn 
            label="ENTRAR"
            class="submit-button"
            @click="handleLogin"
        />

        <div class="divider">OU</div>

        <div class="social-login-buttons">
            <q-btn round class="social-btn" @click="socialLogin('google')">
                <q-icon name="fab fa-google" size="md"/>
            </q-btn>
        </div>
    </div>
</template>

<script setup>
import { ref } from 'vue';
import { useQuasar } from 'quasar';

const $q = useQuasar();
const emit = defineEmits(['switch-to-register']);

const loginData = ref({
    username: '',
    password: '',
    rememberMe: false,
});

const handleLogin = () => {
    if (!loginData.value.username || !loginData.value.password) {
        $q.notify({
            message: 'Por favor, preencha todos os campos.',
            color: 'negative',
            position: 'top',
            icon: Warning,
        });
        return;
    }

    console.log('Login attempt: ', loginData.value);
    $q.notify({
        message: 'Login em progresso...',
        color: 'info',
        position: 'top',
    });

    setTimeout(() => {
        $q.notify({
            message: 'Login realizado com sucesso!',
            color: 'positive',
            position: 'top',
            icon: 'check_circle'
        });
    }, 1500);
};
</script>

<style lang="scss" scoped>
.login-form-wrapper {
    display: flex;
    flex-direction: column;
    gap: 16px;
}

.form-field {
    .form-label {
        display: block;
        color: #9ca3af;
        margin-bottom: 4px;
    }

    .input-field {
        width: 100%;
        .custom-input-field {
        width: 100%;
        padding: 8px 16px;
        border-radius: 4px;
        background: rgba(10, 10, 10, 0.7);
        color: white;
        outline: none;
        transition: all 0.3s ease;

        &:focus {
            border-color: #DC143C;
            box-shadow: 0 0 10px rgba(#DC143C, 0.5);
        }
    }
}
}

.flex-row-spaced {
    display: flex;
    align-items: center;
    justify-content: space-between;
    margin-top: 16px;
}

.remember-me-checkbox {
    .q-checkbox__label {
        color:#9ca3af;
    }

    .q-checkbox__bg {
        background-color: #0a0a0a;
        border: 1px solid #333;
    }
}

.forgot-password-link {
    font-size: 0.875rem;
    color: #DC143C;
    text-decoration: none;
    &:hover {
        text-decoration: underline;
    }
}

.submit-button  {
    width: 100%;
    padding: 8px, 16px;
    border-radius: 4px;
    font-weight: bold;
    background: linear-gradient(to bottom, #DC143C, #8B0000);
    color: white;
    transition: all 0.3s ease;
    box-shadow: 0 0 15px rgba(#DC143C, 0.5);
    margin-top: 24px;
    text-transform: uppercase;

    &:hover {
        transform: translateY(-2px);
        box-shadow: 0 0 20px #DC143C;
    }
}

.divider {
    display: flex;
    align-items: center;
    text-align: center;
    color: #6b7280;
    margin: 24px 0;

    &::before,
    &::after {
        content: "";
        flex: 1;
        border-bottom: 1px solid #333;
    }

    &::before {
        margin-right: 1em;
    }

    &::after {
        margin-left: 1em;
    }
}

.social-login-buttons {
    display: flex;
    justify-content: center;
    gap: 16px;

    .social-btn {
        background-color: #333;
        color: white;
        padding: 8px;
        border-radius: 50%;
        transition: background-color 0.3s ease;

        .q-icon {
            font-size: 1.25rem;
        }

        &:hover {
            background-color: lighten(#333, 5%);
        }
    }
}
</style>