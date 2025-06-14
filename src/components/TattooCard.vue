<template>
    <q-card class="tattoo-card" @click="viewDetails">
        <div class="card-image-wrapper">
            <q-img :src="tattoo.imageSrc" :alt="tattoo.title" class="card-image" />
            <div class="likes-overlay">
                <q-icon 
                    name="favorite"
                    class="heart-icon"
                    :class="{ 'heart-icon-liked': isLiked }"
                    @click.stop="toggleLike"
                />
                <span>{{ currentLikes }}</span>
            </div>
        </div>

        <q-card-section class="card-content">
            <div class="card-header">
                <h3 class="card-title">{{ tattoo.title }}</h3>
                <q-chip dense class="card-tag">{{ tattoo.style }}</q-chip>
            </div>

            <p class="card-artist">
                By <a :href="tattoo.artistLink" class="artist-link">{{ tattoo.artistName }}</a>
            </p>
            <p class="card-description">{{ tattoo.description }}</p>

            <div class="card-footer">
                <span class="card-date">{{ tattoo.datePosted }}</span>
                <div class="card-actions">
                    <q-btn flat dense class="comment-button" @click.stop="viewCommnets">
                        <q-icon name="share"/>
                    </q-btn>
                </div>
            </div>
        </q-card-section>
    </q-card>
</template>

<script setup>
import { ref, computed } from 'vue';
//import { useRouter } from 'vue-router';
import { useQuasar } from 'quasar';

const props = defineProps({
    tattoo: {
        type: Object,
        required: true,
        default: () => ({
            id:null,
            imageSrc:'',
            title: 'Untitled Tattoo',
            artistName: 'Unknown Artist',
            artistLink: '#',
            description: '',
            style: 'General',
            likes: 0,
            comments: 0,
            datePosted: ''
        })
    }
});

const $q = useQuasar();
//const router = useRouter();

const liked = ref(false);
const currentLikes = ref(props.tattoo.likes);

const isLiked = computed(() => {
    return liked.value;
});

const toggleLike = () => {
    if (liked.value) {
        currentLikes.value--;
    } else {
        currentLikes.value++;
    }
    liked.value = !liked.value;
};

const viewDetails = () => {
    $q.dialog ({
        title: props.tattoo.title,
        message: `
            <div style="text-align: center;">
                <img src="${props.tattoo.imageSrc}" style="max-width: 100%; height: auto; border-radius: 8px; margin-bottom: 10px;" />
                <p><strong>Artist:</strong> ${props.tattoo.artistName}</p>
                <p><strong>Style:</strong> ${props.tattoo.style}</p>
                <p>${props.tattoo.description}</p>
                <p><i class="fas fa-heart text-crimson"></i> Likes: ${currentLikes.value} &nbsp; <i class="fas fa-comment"></i> Comments: ${props.tattoo.comments}</p>
                <p><small>${props.tattoo.datePosted}</small></p>
            </div>
        `,
        html: true,
        persistent: true,
        ok: 'Close'
    });
};

const viewCommnets = () => {
    $q.notify ({
        message: `Viewing comments for "${props.tattoo.title}"...`,
        color: 'info',
        position: 'bottom'
    });
};

/*
const shareTattoo = () => {
    $q.notify ({
        message: `Sharing "${props.tattoo.title}"...`,
        color: 'info',
        position: 'bottom'
    });
};
*/
</script>

<style scoped>
.tattoo-card {
    background-color: #2D2D2D;
    border-radius: 8px;
    overflow: hidden;
    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1), 0 10px 15px rgba(0, 0, 0, 0.1);
    border: 1px solid rgba(138, 3, 3, 0.2);

    transition: all 0.3s ease;
    position: relative;
    cursor: pointer;
    z-index: 1;

    &:hover {
        transform: translateY(-10px) rotateZ(-1deg) scale(1.05);
        box-shadow: 0 15px 30px rgba(#DC143C, 0.7),
                    0 0 50px rgba(#8A0303, 0.3),
                    inset 0 0 30px rgba(0,0,0,0.7);
        z-index: 10;
        filter: brightness(1.2);
        border-color: #DC143C !important;
    }

    &:before {
        content: '';
        position: absolute;
        top: 0;
        left: 0;
        right: 0;
        height: 4px;
        background: linear-gradient(90deg, transparent, #DC143C, transparent);
        opacity: 0;
        transition: opacity 0.3s ease;
    }

    &:hover::before {
        opacity: 1;
    }

    .card-image-wrapper {
        position: relative;
    }

    .card-image {
        width: 100%;
        height: 256px;
        object-fit: cover;
    }

    .likes-overlay {
        position: absolute;
        top: 8px;
        right: 8px;
        background-color: rgba(0, 0, 0, 0.7);
        color: white;
        padding: 4px 8px;
        border-radius: 4px;
        display: flex;
        align-items: center;
        gap: 4px;

        .heart-icon {
            color:#DC143C;
            font-size: 1.1em;
            cursor: pointer;
            transition: transform 0.2s ease;

            &:hover {
                transform: scale(1.2);
            }
            &.heart-icon {
                color:#DC143C;
            }
        }
    }

    .card-content {
        padding: 16px;
    }

    .card-header {
        display: flex;
        justify-content: space-between;
        align-items: flex-start;
    }

    .card-title {
        font-size: 1.25rem;
        line-height: 1.75rem;
        font-weight: bold;
        color:#DC143C;
        margin: 0;
    }

    .card-tag {
        font-size: 0.75rem;
        line-height: 1rem;
        background-color: black;
        color: white;
        padding: 2px 8px;
        border-radius: 4px;
        min-height: unset;
        .q-chip__content {
            line-height: 1;
        }
    }

    .card-artist {
        margin-top: 8px;
        color: #d1d5db;
        font-size: 0.875rem;

        .artist-link {
            color:#DC143C;
            text-decoration: none;
            &:hover {
                text-decoration: underline;
            }
        }
    }

    .card-description {
        margin-top: 8px;
        color:#d1d5db;
        font-size: 0.875rem;
    }

    .card-footer {
        margin-top: 16px;
        display: flex;
        justify-content: space-between;
        align-items: center;
    }

    .card-date {
        font-size: 0.75rem;
        color: #9ca3af;
    }

    .card-actions {
        display: flex;
        gap: 8px;

        .q-btn {
            color:#DC143C;
            font-size: 0.875rem;
            padding: 0;
            min-width: unset;
            height: unset;

            &:hover {
                color:white;
            }
        }
    }
}
</style>