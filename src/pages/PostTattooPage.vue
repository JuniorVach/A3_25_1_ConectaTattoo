<template>
    <q-layout view="lHh Lpr lFf" class="post-tattoo-page-layout">
        <q-page-container>
            <q-page class="post-tattoo-page-content">
                <div class="main-content-wrapper">
                    <!--POST TATTOO FORM-->
                    <PostTattooForm />
                </div>
            </q-page>
        </q-page-container>
    </q-layout>
</template>

<script setup>
import PostTattooForm from 'src/components/PostTattooForm.vue';
</script>

<style scoped>
</style>