<template>
    <div class="register-form-wrapper">
        <div class="form-field">
            <label class="form-label">Nome Completo</label>
            <q-input
                v-model="registerData.fullName"
                type="text"
                placeholder="Nome Completo"
                class="input-field"
                input-class="input-text"
                hide-bottom-space
                :rules="[val => (val && val.length > 0) || 'Campo Obrigatório']"
            >
                <template v-slot:control>
                    <input 
                        type="text"
                        :value="registerData.fullName"
                        @input="registerData.fullName = $event.target.value"
                        placeholder="Nome Completo"
                        class="custom-input-field"
                    />
                </template>
            </q-input>
        </div>

        <div class="form-field">
            <label class="form-label">Nome de Usuário</label>
            <q-input
                v-model="registerData.username"
                type="text"
                placeholder="Nome de Usuário"
                class="input-field"
                input-class="input-text"
                hide-bottom-space
                :rules="[val => (val && val.length > 0) || 'Campo Obrigatório']"
            >
                <template v-slot:control>
                    <input 
                        type="text"
                        :value="registerData.username"
                        @input="registerData.username = $event.target.value"
                        placeholder="Nome de Usuário"
                        class="custom-input-field"
                    />
                </template>
            </q-input>
        </div>

        <div class="form-field">
            <label class="form-label">E-mail</label>
            <q-input
                v-model="registerData.email"
                type="email"
                placeholder="email@email.com"
                class="input-field"
                input-class="input-text"
                hide-bottom-space
                :rules="[val => (val && val.length > 0 || 'Campo obrigatório', 
                val => /.+@.+\..+/.test(val) || 'Email inválido')]"
            >
                <template v-slot:control>
                    <input 
                        type="email"
                        :value="registerData.email"
                        @input="registerData.email = $event.target.value"
                        placeholder="email@email.com"
                        class="custom-input-field"
                    />
                </template>
            </q-input>
        </div>

        <div class="form-field">
            <label class="form-label">Senha</label>
            <q-input
                v-model="registerData.password"
                type="password"
                placeholder="Senha"
                class="input-field"
                input-class="input-text"
                hide-bottom-space
                :rules="[val => (val && val.length >= 6) || 'A senha deve ter no mínimo 6 caracteres']"
            >
                <template v-slot:control>
                    <input 
                        type="password"
                        :value="registerData.password"
                        @input="registerData.password = $event.target.value"
                        placeholder="Senha"
                        class="custom-input-field"
                    />
                </template>
            </q-input>
        </div>

        <div class="form-field">
            <label class="form-label">Confirmar senha</label>
            <q-input
                v-model="registerData.confirmPassword"
                type="password"
                placeholder="Confirmar senha"
                class="input-field"
                input-class="input-text"
                hide-bottom-space
                :rules="[
                    val => (val && val.length > 0) || 'Confirmação de senha obrigatória',
                    val => val === registerData.password || 'As senhas não coincidem'
                ]"
            >
                <template v-slot:control>
                    <input 
                        type="password"
                        :value="registerData.confirmPassword"
                        @input="registerData.confirmPassword = $event.target.value"
                        placeholder="Confirmar senha"
                        class="custom-input-field"
                    />
                </template>
            </q-input>
        </div>

        <div class="terms-checkbox-wrapper">
            <q-checkbox
                v-model="registerData.agreeToTerms"
                color="#DC143C"
                class="terms-checkbox"
                :rules="[val => val || 'Você deve concordar com os termos']"
            >
                <span class="terms-text">Eu concordo com os <a href="#" class="terms-link"
                    @click.prevent="showTerms">Termos de Serviço</a> e <a href="#" class="terms-link"
                    @click.prevent="showPrivacy">Política de Privacidades</a></span>
            </q-checkbox>
        </div>

        <q-btn 
            label="ASSINAR COM SANGUE"
            class="submit-button"
            @click="handleRegister"
        />

        <div class="already-have-account">
            Ja tem uma conta? <a href="#" class="switch-link" @click.prevent="emit('switch-to-login')">Entre aqui</a>
        </div>
    </div>
</template>

<script setup>
import { ref } from 'vue';
import { useQuasar } from  'quasar';

const $q = useQuasar();
const emit = defineEmits(['switch-to-login']);

const registerData = ref ({
    fullName: '',
    username: '',
    email: '',
    password: '',
    confirmPassword: '',
    agreeToTerms: false,
});

const handleRegister = () => {
    if (
        !registerData.value.fullName ||
        !registerData.value.username ||
        !registerData.value.email ||
        !registerData.value.password ||
        !registerData.value.confirmPassword ||
        !registerData.value.agreeToTerms ||
        registerData.value.password !== registerData.value.confirmPassword
    ) {
        $q.notify({
            message: 'Por favor, preencha todos os campos corretamente e concorde com os termos.',
            color: 'negative',
            position: 'top',
            icon: 'warning'
        });
        return;
    }

    console.log('Register attempt:', registerData.value);
    $q.notify({
        message: 'Cadastro em progresso...',
        color: 'info',
        position: 'top',
    });

    setTimeout(() => {
        $q.notify({
            message: 'Cadastro realizado com sucesso! Bem vindo ao Conecta Tattoo!',
            color: 'positive',
            position: 'top',
            icon: 'check_circle',
        });
        emit('switch-to-login');
    }, 1500);
};
</script>

<style lang="scss" scoped>
.register-form-wrapper {
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
            border: 1px solid #333;
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

.terms-checkbox-wrapper {
    display: flex;
    align-items: center;

    .terms-checkbox {
        .q-checkbox__label {
            color: #9ca3af;
            font-size: 0.875rem;
        }

        .q-checkbox__bg {
            background-color: #0a0a0a;
            border: 1px solid #333;
        }
    }

    .terms-link {
        color: #DC143C;
        text-decoration: none;
        &:hover {
            text-decoration: underline;
        }
    }
}

.submit-button {
    width: 100%;
    padding: 8px 16px;
    border-radius: 4px;
    font-weight: bold;
    background-color: linear-gradient(to bottom, #DC143C, #8B0000);
    color: white;
    transition: all 0.3s ease;
    box-shadow: 0 0 15px rgba(#DC143C, 0.5);
    margin-top: 16px;
    text-transform: uppercase;

    &:hover {
        transform: translateY(-2px);
        box-shadow: 0 0 20px #DC143C;
    }
}

.already-have-account {
    text-align: center;
    color: #6b7280;
    font-size: 0.875rem;
    margin-top: 16px;

    .switch-link {
        color: #DC143C;
        text-decoration: none;
        &:hover {
            text-decoration: underline;
        }
    }
}
</style>