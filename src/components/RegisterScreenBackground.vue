<template>
    <div class="floating-skulls">
        <div class="skull skull-1">
            <q-icon name="fas fa-skull" class="skull-icon" />
        </div>
        <div class="skull skull-2">
            <q-icon name="fas fa-skull" class="skull-icon" />
        </div>
        <div class="skull skull-3">
            <q-icon name="fas fa-skull" class="skull-icon" />
        </div>
        <div class="skull skull-4">
            <q-icon name="fas fa-skull" class="skull-icon" />
        </div>
    </div>
</template>

<script setup>
</script>

<style scoped>
.floating-skulls {
    position: absolute;
    width: 100%;
    height: 100%;
    pointer-events: none;
    z-index: 0;
    overflow: hidden;
}

.skull {
    position: absolute;
    opacity: 0.1;
    filter: drop-shadow(0 0 5px #DC143C);
    color: #DC143C;
}

.skull {
    position: absolute;
    opacity: 0.1;
    filter: drop-shadow(0 0 5px #DC143C);
    color: #DC143C;
}

.skull-icon {
    font-size: 1em;
}

.skull-1 {
    top: 10%;
    left: 5%;
    transform: rotate(-15deg);
    .skull-icon { font-size: 1.875rem; }
}

.skull-2 {
    top: 70%;
    left: 80%;
    transform: rotate(25deg);
    .skull-icon { font-size: 2.25rem; }
}

.skull-3 {
    top: 30%;
    left: 85%;
    transform: rotate(10deg);
    .skull-icon { font-size: 1.875rem; }
}

.skull-4 {
top: 80%;
left: 15%;
transform: rotate(-25deg);
.skull-icon { font-size: 1.875rem; }
}
</style>