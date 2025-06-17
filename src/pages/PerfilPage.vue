<template>
    <q-page class="q-pa-md">
        <!--PROFILE BANNER-->
        <ProfileBanner :user="artistProfile" />

        <div class="q-pa-md" style="max-width: 1400px; margin: 0 auto;">
            <q-tabs
                v-model="tab"
                dense
                class="text-grey"
                active-color="white"
                indicator-color="#e02424"
                align="left"
                narrow-indicator
            >
                <q-tab name="portfolio" icon="fas fa-images" label="Portfolio" />
                <q-tab name="saved" icon="fas fa-heart" label="Saved" />
                <q-tab name="appointments" icon="fas fa-calendar-alt" label="Appointments" />
                <q-tab name="reviews" icon="fas fa-comment-alt" label="Reviews" />
            </q-tabs>

            <q-separator color="grey-8" class="q-mb-lg" />

            <q-tab-panels v-model="tab" animated class="bg-transparent">
                <q-tab-panel name="portfolio">
                    <!--TATTOO GALLERY-->
                    <TattooGallery :tattoos="tattoos" />
                    <div class="flex flex-center q-mt-xl">
                        <q-pagination
                            v-model="pagination"
                            :ma="8"
                            direction-links
                            flat
                            color="white"
                            active-color="#e02424"
                            boundary-numbers
                        />
                    </div>
                    <CardGrid :tattoos="tattoos" class="q-mt-md" />
                </q-tab-panel>
                <q-tab-panel name="saved">
                    <div class="text-center text-grey">Conteúdo da aba 'Saved aqui.'</div>
                </q-tab-panel>
                <q-tab-panel name="appointments">
                    <div class="text-center text-grey">Conteúdo da aba 'Appointments aqui.'</div>
                </q-tab-panel>
                <q-tab-panel name="reviews">
                    <div class="text-center text-grey">Conteúdo da aba 'Reviews' aqui.</div>
                </q-tab-panel>
            </q-tab-panels>
        </div>
    </q-page>
</template>

<script setup>
import { ref } from 'vue';
import ProfileBanner from 'src/components/ProfileBanner.vue';
import TattooGallery from 'src/components/TattooGallery.vue';

const tab = ref ('portfolio')
const pagination = ref(1);

const artistProfile = ref ({
    name: 'Lilith Raven',
    handle: '@lilith_raven',
    avatar: 'https://randomuser.me/api/portraits/women/44.jpg',
    stats: {
        tattoos: 127,
        rating: 4.9,
        followers: 856,
    },
    bio: 'babjsabjsbjbjasbjabdabjdbajdajbajbjabdjabdjajdbajdbajbdjabdjajdbajdbajdbajbdab',
    studio: 'Black Veils Bride'
});

const tattoos = ref ([
    {id: 1, title: 'Dark Angel', style: 'Back & Grey, Full Black Piece', date: 'Jun 2023', likes: 42, comments: 8, imgSrc: 'https://images.unsplash.com/photo-1611689347400-613a95a6a9d8?ixlib=rb-4.0.3&ixid=M3wxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1470&q=80'},
    {id: 2, title: 'Gothic Rose', style: 'Traditional, Thigh Piece', date: 'Apr 2023', likes: 67, comments: 12, imgSrc: 'https://images.unsplash.com/photo-1560727840-0a15d6533647?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8fA%3D%3D&auto=format&fit=crop&w=1374&q=80'},
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
</style>
