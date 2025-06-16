<template>
    <div class="flame"></div>
</template>

<script setup>
</script>

<style scoped>
.flame {
    position: relative;
    width: 40px;
    height: 40px;
    background: linear-gradient(to top, #DC143C, #8B0000);
    border-radius: 50% 50% 20% 20%;
    transform: rotate(45deg);
    box-shadow: 0 0 20px #8B0000;
    animation: flicker 2s infinite alternate;
}

@keyframes flicker {
    0%, 100% { transform: rotate(45deg) scale(1); opacity: 1; }
    50% { transform: rotate(45deg) scale(1.1); opacity: 0.8; }
}
</style>