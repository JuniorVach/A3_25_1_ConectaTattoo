<template>
    <q-page class="choose-page-container flex flex-center">
        <RegisterScreenBackground />
        <div class="option-content">
            <div class="title-font">
                <h1 class="option-title gothic-font">
                    <span class="title-wrapper">
                        Conecta<br />Tattoo
                        <span class="title-icon">☠</span>
                    </span>
                </h1>

                <p class="choose-subtitle">
                    Quer se cadastrar ou Entrar como Tatuador ou Usuário?
                </p>

                <div class="button-wrapper">
                    <q-btn 
                        class="choose-button btn-blood q-py-md text-h6"
                        label="Tatuador ☠"
                        to="/tatuador"
                    />
                    <q-btn 
                        class="choose-button btn-blood q-py-md text-h6"
                        label="Usuário"
                        to="/login"
                    />
                </div>
            </div>
        </div>
    </q-page>
</template>

<script setup>
import RegisterScreenBackground from 'src/components/RegisterScreenBackground.vue';
</script>

<style scoped>
.option-content {
    position: absolute;
    inset: 0;
    display: flex;
    justify-content: center;
    align-items: center;
    text-align: center;
}

.title-font {
    display: flex;
    flex-direction: column;
    align-items: center;
    margin-top: 6rem;
}

.option-title {
    font-size: 14rem;
    color: crimson;
    letter-spacing: 0.25rem;
    font-family: 'UnifrakturMaguntia', cursive;
    transform: rotate(10deg);
    transform-origin: center center;
    position: relative;
    top: -40px;
    margin: 0;
    text-align: center;
}

.title-wrapper {
    display: inline-block;
    position: relative;
}

.title-icon {
    position: absolute;
    bottom: -1rem;
    right: 0;
    font-size: 3rem;
}

.choose-subtitle {
    margin-top: 5rem;
    font-size: 1.5rem;
    font-weight: bold;
    color: #ffffff;
    max-width: 48rem;
    margin-left: auto;
    margin-right: auto;
    filter: drop-shadow(0 2px 2px rgba(0,0,0,1));
}

.button-wrapper {
    margin-top: 2rem;
}

.choose-button {
    padding: 0.75rem 2rem;
    font-size: 1.125rem;
    font-weight: bold;
    border: 2px solid #DC143C;
    border-radius: 0.5rem;
    transition: all 0.3s ease;
    margin: 50px;
    width: 500px;
}
</style>