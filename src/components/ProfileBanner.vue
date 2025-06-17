<template>
    <div class="profile-banner-bg q-pa-md q-pt-xl text-center relative-position">
        <q-btn 
            flat
            round
            color="white"
            icon="fas fa-cog"
            class="absolute-top-right q-ma-sm"
            style="background-color: rgba(0,0,0,0.7)"
        />

        <q-avatar size="140px" class="q-mb-md">
            <img :src="user.avatar" style="border: 4px solid var(--q-color-primary);">
        </q-avatar>

        <h1 class="text-h3 text-white gothic-font q-mb-xs">{{ user.name }}</h1>

        <div class="row items-center justify-center q-gutter-md q-mb-md">
            <div class="text-grey-5">{{ user.handle }}</div>
            <q-chip v-if="user.isArtist" class="badge-gothic text-white" icon="fas fa-spray-can" size="sm">
                TATTOO ARTIST
            </q-chip>
        </div>

        <div class="row hustidy-center q-gutter-xl text-center q-mb-lg">
            <div>
                <div class="text-h5 text-weight-bold">{{ user.stats.tattoos }}</div>
                <div class="text-grey-5 text-caption">Tattoos</div>
            </div>
            <div>
                <div class="text-h5 text-weight-bold">{{ user.stats.rating }}</div>
                <div class="text-grey-5 text-caption">Rating</div>
            </div>
            <div>
                <div class="text-h5 text-weight-bold">{{ user.stats.followers }}</div>
                <div class="text-grey-5 text-caption">Followers</div>
            </div>
        </div>

        <p class="text-grey-4 text-center q-mb-lg" style="max-width: 600px; margin: 0 auto">
            {{ user.bio.split('Black Veil Bride')[0] }}
            <span class="text-accent">{{ user.studio }}</span>
            {{ user.bio.split('Black Veils Bride')[1] }}
        </p>

        <div class="row justify-center q-gutter-md q-mt-lg q-pb-lg">
            <q-btn color="primary" unelevated icon="fas fa-envelope" label="Contact"/>
            <q-btn 
                outline
                style="background-color: rgba(0,0,0,0.7); border-color: #555;"
                icon="fas fa-bookmark"
            />
        </div>
    </div>
</template>

<script setup>
defineProps({
    user: {
        type: Object,
        required: true,
    },
});
</script>

<style scoped>
</style>