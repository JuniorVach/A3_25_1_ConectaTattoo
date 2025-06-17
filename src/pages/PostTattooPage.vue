<template>
    <q-page padding class="q-mx-auto bg-dark" style="max-width: 800px;">
        <q-form @submit="onSubmit" class="q-gutter-y-lg">
            <q-card-section class="text-center text-white">
                <p>Preencha os detalhes abaixo para fazer o upload de sua nova tatuagem.</p>
            </q-card-section>

            <q-input
                v-model="formData.title"
                label="Título do Design"
                placeholder="Ex.: Dragão Caótico, Caveira Tribal"
                dark
                standout="bg-grey-10"
                :rules="[val => !!val || 'O título é obrigatório']"
                lazy-rules
            >
                <template v-slot:prepend>
                    <q-icon name="fas fa-heading" color="red-10" />
                </template>
            </q-input>

            <div>
                <label class="text-h6 text-grey-4 q-mb-sm block">
                    <q-icon name="fas fa-venus-mars" color="red-10" class="q-mr-sm" />
                    Estilo
                </label>
                <q-btn-toggle
                    v-model="formData.gender"
                    push
                    spread
                    no-caps
                    toggle-color="red-10"
                    color="grey-9"
                    text-color="white"
                    :options="[
                        { label: 'Masculino', value: 'masculino', icon: 'fas fa-mars' },
                        { label: 'Feminino', value: 'feminino', icon: 'fas fa-venus'}
                    ]"
                />
            </div>

            <ImageUploader v-model="formData.image" />

            <q-input
                v-model="formData.description"
                type="textarea"
                label="Descrição"
                placeholder="Descreva seu design, inspirações, significados..."
                dark
                standout="bg-grey-10"
                :rules="[val => !!val || 'A descrição é obrigatória']"
                lazy-rules
            >
                <template v-slot:prepend>
                    <q-icon name="fas fa-align-left" color="red-10" />
                </template>
            </q-input>

            <TagInput v-model="formData.tags" />

            <div class="row q-col-gutter-md">
                <div class="col-12 col-sm-6">
                    <q-input
                        v-model.number="formData.size"
                        type="number"
                        label="Tamanho aproximado (cm)"
                        placeholder="Ex.: 15"
                        dark
                        standout="bg-grey-10"
                        :rules="[val => val > 0 || 'Insira um tamanho válido']"
                        lazy-rules
                    >
                        <template v-slot:prepend>
                            <q-icon name="fas fa-ruler-combined" color="red-10" />
                        </template>
                    </q-input>
                </div>
                <div class="col-12 col-sm-6">
                    <q-select
                        v-model="formData.placement"
                        :options="placementOptions"
                        label="Localização no corpo"
                        dark
                        standout="bg-grey-10"
                        emit-value
                        map-options
                        :rules="[val => !!val || 'Selecione um local']"
                        lazy-rules
                    >
                        <template v-slot:prepend>
                            <q-icon name="fas fa-user" color="red-10" />
                        </template>
                    </q-select>
                </div>
            </div>

            <div class="q-pt-md">
                <q-btn
                    type="submit"
                    label="Enviar design"
                    icon="fas fa-skull"
                    class="btn-blood full-width q-py-md text-h6"
                    unelevated
                />
            </div>
        </q-form>
    </q-page>
</template>

<script setup>
import { ref } from 'vue';
// useRouter não é mais necessário aqui, pois a funcionalidade de logout foi removida
// import { useRouter } from 'vue-router';

import ImageUploader from 'src/components/ImageUploader.vue';
import TagInput from 'src/components/TagInput.vue';

// A instância do router não é mais necessária nesta página
// const router = useRouter();

const formData = ref ({
    title: '',
    gender: 'masculino',
    image: null,
    description: '',
    tags: [],
    size: null,
    placement: ''
});

const placementOptions = [
    { label: 'Braço', value: 'braco' },
    { label: 'Antebraço', value: 'antebraco' },
    { label: 'Costas', value: 'costas' },
    { label: 'Peito', value: 'peito' },
    { label: 'Perna', value: 'perna' },
    { label: 'Pé', value: 'pe' },
    { label: 'Mão', value: 'mao' },
    { label: 'Pescoço', value: 'pescoco' },
    { label: 'Rosto', value: 'rosto' },
    { label: 'Outro', value: 'outro' }
];

<<<<<<< HEAD
const onSubmit = () => {
  console.log('Dados do formulário para envio:', formData.value);
  alert('Design enviado com sucesso! (Funcionalidade de salvamento não implementada para demo)');
};

// A função logoutTatuador foi removida, pois o botão correspondente foi removido.
=======
const onSubmit = async () => {
    const postagem = {
        ...formData.value,
        likes: 0,
        comentarios: [],
        salvamentos: 0
    };

    try {
        const response = await fetch('http://localhost:3000/postagens', {
            method: 'POST',
            headers: { 'Content-Type': 'application/json' },
            body: JSON.stringify(postagem)
        });

        if (response.ok) {
            console.log('Postagem salva com sucesso');

            formData.value = {
                title: '',
                gender: 'masculino',
                image: null,
                description: '',
                tags: [],
                size: null,
                placement: ''
            };
        } else {
            console.error('Erro ao salvar postagem');
        }
    } catch (error) {
        console.error('Erro na requisição:', error);
    }
};
>>>>>>> 09312ab (add: novas funcionalidades)
</script>

<style scoped>
.block {
    display: block;
}
.btn-blood {
  background-color: #8a0303;
  color: white;
}
</style>
