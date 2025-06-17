<template>
    <div>
        <label class="text-h6 text-grey-4 q-mb-sm-block">
            <q-icon name="fas fa-image" color="red-10" class="q-mr-sm" />
            Imagem do Design
        </label>
        <div
            class="file-upload rounded-borders q-pa-lg text-center cursor-pointer"
            :class="{ 'dragover': isDragging, 'pulse': !imagePreviewUrl }"
            @dragenter.prevent="onDragEnter"
            @dragover.prevent
            @dragleave.prevent="onDragLeave"
            @drog.prevent="onDrop"
            @click="triggerFileInput"
        >
            <div v-if="!imagePreviewUrl">
                <q-icon name="fas fa-cloud-upload-alt" color="red-10" size="xl" class="q-mb-md" />
                <p class="q-mb-sm">Arraste e solte a imagem aqui</p>
                <p class="text-sm text-grey-6 q-mb-md">ou</p>
                <q-btn 
                    labek="Selecione do computador"
                    class="btn-blood"
                    rounded
                    unelevated
                    no-caps
                />
                <input 
                    type="file"
                    ref="fileInput"
                    @change="onFileSelected"
                    accept="image/*"
                    class="hidden"
                    required
                />
            </div>
            <div v-else>
                <q-img 
                    :src="imagePreviewUrl"
                    class="prebview-image rounded-borders"
                    fit="contain"
                />
                <q-btn 
                    flat
                    dense
                    color="red-10"
                    icon="fas fa-times"
                    label="Remover Imagem"
                    @click.stop="removeImage"
                    class="q-mt-sm"
                    no-caps
                />
            </div>
        </div>
    </div>
</template>

<script setup>
import { ref } from 'vue';

const emit = defineEmits(['update:modelValue']);

const fileInput = ref(null);
const imagePreviewUrl = ref(null);
const isDragging = ref(false);

const handleFiles = (files) => {
    if (files && files[0] && files[0].type.startsWith('image/')) {
        const file = files[0];
        const reader = new FileReader();
        reader.onload = (e) => {
            imagePreviewUrl.value = e.target.result;
        };

        reader.readAsDataURL(file);
        emit('update:modelValue', file);
    }
};

const triggerFileInput = () => {
    if (!imagePreviewUrl.value) {
        fileInput.value.click();
    }
};

const onFileSelected = (event) => {
    handleFiles(event.target.files);
};

const removeImage = () => {
    imagePreviewUrl.value = null;
    fileInput.value.value = '';
    emit('update:modelValue', null);
};

const onDragEnter = () => isDragging.value = true;
const onDragLeave = () => isDragging.value = false;
const onDrop = (event) => {
    isDragging.value = false;
    handleFiles(event.dataTransfer.files);
};
</script>

<style scoped>
.file-upload {
    border: 2px dashed crimson;
    background-color: rgba(20, 20, 20, 0.5);
    transition: all 0.3s;
}

.file-upload:hover {
    background-color: rgba(220, 20, 60, 0.1);
}

.file-upload.dragover {
    background-color: rgba(220, 20, 60, 0.2);
    border-style: solid;
}

.preview-image {
    max-height: 240px;
    border: 1px solid crimson;
}

.pulse {
    animation: pulse 2s infinite;
}
@keyframes pulse {
    0% { box-shadow: 0 0 0 0 rgba(220, 20, 60, 0.4); }
    70% { box-shadow: 0 0 0 10px rgba(220, 20, 60, 0); }
    100% { box-shadow: 0 0 0 0 rgba(220, 20, 60, 0); }
}

.block {
    display: block;
}

.hidden {
    display: none;
}
</style>