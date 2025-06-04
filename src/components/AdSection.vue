<script setup>
import TattooCircles from './TattooCircles.vue';
</script>

<template>
    <section class="ad-section">
        <div class="left-column">
            |<h1 id="title-styles">VÁRIOS ESTILOS</h1>
        </div>

        <div class="right-column">
            <TattooCircles class="ad-circles"/>
        </div>
    </section>
</template>

<style scoped>
.ad-section {
    display: flex;
    width: 97vw;
    height: 200vw;
    background: rgb(17, 16, 16);
    overflow: hidden;
    position: relative;
}

.left-column {
    flex: 1;
    position: relative;
    display: flex;
    align-items: center;
    justify-content: flex-start;
    padding-left: 2rem;
}

.right-column {
    flex: 1;
    position: relative;
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
}

.ad-circles {
    margin-top: 100px;
}

#title-styles {
    color: white;
    
}
</style>