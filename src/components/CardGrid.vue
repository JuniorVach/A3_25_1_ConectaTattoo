<template>
    <div class="tattoo-grid-container">
        <div class="tattoo-grid">
            <TattooCard v-for="tattoo in tattoos" :key="tattoo.id" :tattoo="tattoo" />
        </div>
    </div>
</template>

<script setup>
import { ref } from 'vue';
import  TattooCard from './TattooCard.vue';

const tattoos = ref ([
    {
        id: 1,
        imgSrc: "https://images.unsplash.com/photo-1600334129128-685c5582fd35?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1470&q=80",
        title: "Dark Revenant",
        artistName: "Nyx Void",
        artistLink: '#',
        description: '"..."',
        style: "Gótico",
        likes: 247,
        comments: 14,
        datePosted: "2 dias atrás"
    },
    {
        id: 2,
        imageSrc: "https://images.unsplash.com/photo-1549429712-4299b9e58e3b?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1470&q=80",
        title: "Shadow Bloom",
        artistName: "Elias Thorne",
        artistLink: "#",
        description: '"..."',
        style: "Abstrato",
        likes: 180,
        comments: 8,
        datePosted: "3 dias atrás"
    },
    {
        id: 3,
        imageSrc: "https://images.unsplash.com/photo-1600021673809-5a9e7f8b9e6f?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1470&q=80",
        title: "Infernal Serpent",
        artistName: "Valeria Kage",
        artistLink: "#",
        description: '"..."',
        style: "Tradicional",
        likes: 310,
        comments: 21,
        datePosted: "1 semana atrás"
    },
    {
        id: 4,
        imageSrc: "https://images.unsplash.com/photo-1549429712-4299b9e58e3b?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1470&q=80",
        title: "Cryptic Whispers",
        artistName: "Nyx Void",
        artistLink: "#",
        description: '"..."',
        style: "Gótico",
        likes: 195,
        comments: 11,
        datePosted: "4 dias atrás"
    },
]);
</script>

<style scoped>
.tattoo-grid-container {
    padding: 0 1rem;
    overflow-y: visible;
    height: 100%;
}

.tattoo-grid {
    display: grid;
    grid-template-columns: repeat(auto-fill, minmax(280px, 1fr));
    gap: 32px;
    padding-bottom: 20px;
    justify-content: center;

    overflow: visible;
    position: relative;

    @media (min-width: 768px) {
        grid-template-columns: repeat(2, 1fr);
    }
    @media (min-width: 1024px) {
        grid-template-columns: repeat(3, 1fr);
    }
}

.tattoo-grid-container::-webkit-scrollbar {
    width: 10px;
}

.tattoo-grid-container::-webkit-scrollbar-track {
    background: #2D2D2D;
    border-radius: 10px;
}

.tattoo-grid-container::-webkit-scrollbar-thumb {
    background: #8A0303;
    border-radius: 10px;
    &:hover {
        background: #DC143C;
    }
}
</style>