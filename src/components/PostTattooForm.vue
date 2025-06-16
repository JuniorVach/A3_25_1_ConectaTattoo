<template>
    <q-card class="post-form-card gothic-card">
        <h2 class="form-title blood-text">Postar Nova Tattoo</h2>

        <div class="form-section">
            <label class="form-label blood-text">Imagem da Tattoo</label>
            <q-file
                v-model="tattooImagem"
                label="Arraste ou solte sua imagem aqui ou clique para selecionar"
                filled
                counter
                @update:model-value="handleImageUpload"
                accept="image/*"
                max-file-size="5242880"
                class="file-upload-area"
                input-class="hidden-input"
                color="#DC143C"
            >
                <template v-slot:file="{ file }">
                    <div class="q-file__selected-item row q-col-gutter-sm justify-center">
                        <q-img :src="imagePreviewUrl" alt="Preview" class="uploaded-image-preview" />
                        <div class="col-12 text-center q-pt-md">
                            <p class="q-mb-xs">{{ file.name }}</p>
                            <p class="text-xs text-gray-400">{{ (file.size / (1024*1024)).toFixed(2) }} MB</p>
                        </div>
                    </div>
                </template>

                <template v-slot:prepend>
                    <q-icon name="fas fa-cloud-upload-alt" class="upload-icon" />
                </template>

                <template v-slot:append v-if="tattooImagem">
                    <q-btn flat round icon="clear" @click.stop.prevent="clearImage" />
                </template>

                <template v-slot:after>
                    <div class="text-xs text-gray-400 text-center q-pt-sm">
                        Formatos suportados: JPG, PNG
                    </div>
                </template>
            </q-file>
        </div>

        <div class="form-section">
            <label for="title" class="form-label blood-text">Título</label>
            <q-input 
                v-model="tattooData.title"
                filled
                placeholder="Ex.: Dragão Florido"
                class="input-field"
                color="#DC143C"
            />
        </div>

        <div class="form-section">
            <label for="description" class="form-label blood-text">Descrição</label>
            <q-input 
                v-model="tattooData.description"
                type="textarea"
                rows="4"
                filled
                placeholder="Descreva sua tatoo"
                class="input-field"
                color="#DC143C"
            />
        </div>

        <div class="form-secion">
            <label class="form-label blood-text">Tags</label>
            <div class="tag-suggestions">
                <q-chip
                    v-for="tag in suggestedTags"
                    :key="tag"
                    :selected="selectedTags.includes(tag)"
                    @click="toggleTag(tag)"
                    clickable
                    class="tag-chip"
                    text-color="white"
                    color="rgba(220, 20, 60, 0.2)"
                >
                    {{ tag }}
                </q-chip>
            </div>
            <q-input 
                v-model="newTagInput"
                filled
                placeholder="Adicione tags (separadas por vírgula)"
                @keyup.enter="addTagsFromInput"
                class="input-field"
                color="#DC143C"
            />
        </div>

        <div class="grid-layout">
            <div>
                <label for="style" class="form-label blood-text">Estilo</label>
                <q-selected 
                v-model="tattooData.style"
                :options="stylesOptions"
                label="Selecione um estilo"
                filled
                class="input-field"
                color="#DC143C"
                />
            </div>

            <div>
                <label for="hours" class="form-label blood-text">Tempo de Trabalho</label>
                <q-input 
                v-model="tattooData.workHours"
                filled
                placeholder="Ex.: 8 horas"
                class="input-field"
                color="#DC143C"
                />
            </div>

            <div>
                <label for="session" class="form-label blood-text">Número de Sessões</label>
                <q-input 
                    v-model.number="tattooData.sessions"
                    type="nu,ber"
                    min="1"
                    filled
                    placeholder="Ex.: 2"
                    class="input-field"
                    color="#DC143C"
                />
            </div>

            <div>
                <label for="date" class="form-label blood-text">Data da Tattoo</label>
                <q-input 
                    v-model="tattooData.tattooDate"
                    filled
                    type="date"
                    class="input-field"
                    color="#DC143C"
                />
            </div>
        </div>

        <div class="submit-button-wrapper">
            <q-btn class="submit-button btn-blood pulse" @click="postTattoo">
                <q-icon name="fas fa-skull" class="q-mr-sm" /> Postar Tattoo
            </q-btn>
        </div>
    </q-card>
</template>

<script setup>

</script>

<style scoped>
</style>