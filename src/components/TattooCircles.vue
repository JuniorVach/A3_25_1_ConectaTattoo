<template>
  <div class="circle-container">
    <div class="circle" style="z-index: 3; left: 0; top: 70px">
      <img src="../assets/tattoo1.jpg" alt="tattoo 1" />
    </div>
    <div class="circle" style="z-index: 2; left: 160px; top: 0">
      <img src="../assets/tattoo1.jpg" alt="tattoo 2" />
    </div>
    <div class="circle" style="z-index: 1; left: 160px; top: 140px">
      <img src="../assets/tatuagens/ads/ads-tattoo.png" alt="tattoo 3" class="tat"/>
    </div>
  </div>
</template>

<style scoped>
.circle-container {
  position: relative;
  width: 400px;
  height: 250px;
}

.circle {
  position: absolute;
  width: 200px;
  height: 200px;
  border-radius: 50%;
  overflow: hidden;
  border: 3px solid white;
  box-shadow: 0 4px 8px rgba(0, 0, 0, 0.2);
  transition: transform 0.3s ease;
}

.circle:hover {
  transform: scale(1.1);
}

.circle img {
  width: 100%;
  height: 100%;
  object-fit: cover;
}

</style>
