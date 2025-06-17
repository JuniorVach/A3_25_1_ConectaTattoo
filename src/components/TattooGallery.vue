<template>
    <div class="row q-cool-gutter-md">
        <div
            class="col-12 col-sm-6 col-md-4 col-lg-3"
            v-for="tattoo in tattoos"
            :key="tattoo.id"
        >
            <!--TATTOO CARD-->
        </div>
    </div>
</template>

<script setup>
import ProfileCard from './ProfileCard.vue';

defineProps({
    tattoos: {
        type: Array,
        required: true,
    },
});
</script>

<style scoped>
</style>