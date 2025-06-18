<template>
    <q-card class="artist-card" v-for="data in artistas">
        <q-img :src="data.imageSrc" :alt="data.name" class="artist-avatar"/>
        <q-card-section class="artist-info">
            <h3 class="artist-name">{{ data.name }}</h3>
            <p class="artist-specialty">{{ artist.specialty }}</p>

            <div class="artist-tags">
                <q-chip
                    v-for="tag in data.tags"
                    :key="tag"
                    dense
                    class="artist-tag"
                >
                    {{ tag }}
                </q-chip>
            </div>

            <p class="artist-quote">{{ artistas.quote }}</p>

            <q-btn 
                label="Ver Perfil"
                class="view-profile-btn"
                @click="viewProfile"
                :to="`/perfil/${artist.id}`"
            />
        </q-card-section>
    </q-card>
</template>

<script setup>
import { onMounted, ref } from 'vue';

const artistas = ref ([]);

onMounted(async () => {
    try {
        const res = await fetch('http://localhost:3000/artistas')
        const data = await res.json();
        artistas.value = data;
    } catch (error) {
    console.error('Erro ao buscar artistas:', error);
  }
});
//import { useQuasar } from 'quasar';

defineProps ({
    artist: {
        type: Object,
        required: true,
        default: () => ({
            id: null,
            imageSrc: '',
            name: 'Unknown Artist',
            specialty: 'Tattoo Artist',
            tags: [],
            quote: ''
        })
    }
});

//const $q = useQuasar();

const viewProfile = () => {

};
</script>

<style scoped>
.artist-card {
    background-color: #2D2D2D;
    border-radius: 8px;
    padding: 24px;
    border: 1px solid #8A0303;
    display: flex;
    flex-direction: column;
    align-items: center;
    text-align: center;
    box-shadow: 0 4px 6px rgba(0,0,0,0.1), 0 10px 15px rgba(0,0,0,0.1);
}

.artist-avatar {
    width: 96px;
    height: 96px;
    border-radius: 50%;
    border: 2px solid #DC143C;
    object-fit: cover;
    margin-bottom: 16px;
}

.artist-name {
    font-size: 1.25rem;
    font-weight: bold;
    color:#DC143C;
    margin-top: 0;
    margin-bottom: 0;
}

.artist-specialty {
    font-size: 0.875rem;
    color: #d1d5db;
    margin-top: 16px;
}

.artist-tags {
    display: flex;
    justify-content: center;
    gap: 8px;
    margin-bottom: 16px;

    .artist-tag {
        font-size: 0.75rem;
        background-color: black;
        color: white;
        padding: 4px 8px;
        border-radius: 4px;
        min-height: unset;
        .q-chip__content {
            line-height: 1;
        }
    }
}

.artist-quote {
    font-size: 0.875rem;
    color: #d1d5db;
    margin-bottom: 16px;
    font-style: italic;
}

.view-profile-btn {
    background-color: #8A0303;
    color: white;
    padding: 8px 24px;
    border-radius: 6px;
    font-size: 0.875rem;
    font-weight: bold;
    text-transform: none;
    transition: background-color 0.3s ease;
    
    &:hover {
        background-color: #DC143C;  
    }
}
</style>