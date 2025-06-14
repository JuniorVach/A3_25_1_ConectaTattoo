<template>
    <div class="newsletter-section-container">
        <div class="newsletter-content-wrapper">
            <h2 class="title-font newsletter-heading">Junte-se a nós</h2>
            <p class="newsletter-description">
                Se inscreva para receber as últimas notícias do mundo das tatuagens.
            </p>

            <div class="newsletter-form-wrapper">
                <q-input
                    v-model="email"
                    type="email"
                    placeholder="Seu email"
                    standout="bg-dark text-white"
                    class="email-input"
                    input-class="email-input-text"
                    :rules="[val => (val && val.length > 0) || 'Email cannot be empty', val => /.+@.+\..+/.test(val) || 'Must be a valid email']"
                >
                    <template v-slot:control>
                        <input
                            type="email"
                            :value="email"
                            @input="email = $event.target.value"
                            placeholder="Seu email"
                            class="email-input-field"
                        >
                    </template>
                </q-input>

                <q-btn 
                    label="Inscreva"
                    class="subscribe-button"
                    @click="subscribe"
                />
            </div>
        </div>
    </div>
</template>

<script setup>
import { ref } from 'vue';
import { useQuasar } from 'quasar';

const email = ref('');
const $q = useQuasar();

const subscribe = () => {
    if (!email.value || !/.+@.+\..+/.test(email.value)) {
        $q.notify ({
            message: 'Please enter a valid email address.',
            color: 'negative',
            position: 'top',
            icon: 'warning'
        });
        return;
    }

    console.log('Subscribing with email: ', email.value);
    $q.notify ({
        message: `Thank you for joining our coven, ${email.value}!`,
        color: 'positive',
        position: 'top',
        icon: 'check_circle'
    });
    email.value = '';
};
</script>

<style scoped>
.title-font {
    font-family: 'Germania One', cursive;
}

.newsletter-section-container {
    background-color: #2D2D2D;
    margin-top: 80px;
    padding: 64px 14px;

    @media (min-width: 640px) {
        padding-left: 24px;
        padding-right: 24px;
    }
    @media (min-width: 1024px) {
        padding-left: 32px;
        padding-right: 32px;
    }
}

.newsletter-content-wrapper {
    max-width: 768px;
    margin-left: auto;
    margin-right: auto;
    text-align: center;
}

.newsletter-heading {
    font-size: 2.25rem;
    line-height: 2.5rem;
    color: #DC143C;
    margin-bottom: 16px;
}

.newsletter-description {
    color: #d1d5db;
    margin-bottom: 32px;
}

.newsletter-form-wrapper {
    display: flex;
    flex-direction: column;
    justify-content: center;
    gap: 16px;

    @media (min-width: 640px) {
        flex-direction: row;
    }

    .email-input {
        flex-grow: 1;
        max-width: 512px;

        .email-input-field {
            background-color: #1A1A1A;
            border: 1px solid #8A0303;
            border-radius: 6px;
            color: white;
            padding: 12px 16px;
            outline: none;
            width: 100%;
            box-sizing: border-box;

            &:focus {
                box-shadow: 0 0 0 2px #DC143C;
            }
        }

        .q-field__control {
            display: none !important;
        }
    }

    .subscribe-button {
        background-color: #8A0303;
        color: white;
        padding: 12px 24px;
        border-radius: 6px;
        font-weight: bold;
        text-transform: none;
        transition: background-color 0.3s ease;
        height: 50px;

        &:hover {
            background-color: #DC143C;
        }
    }
}
</style>