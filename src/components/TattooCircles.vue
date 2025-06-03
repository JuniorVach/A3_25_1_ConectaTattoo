<template>
  <div class="circle-container">
    <div class="circle" style="z-index: 3; left: 0; top: 50px">
      <img src="../assets/tattoo1.jpg" alt="tattoo 1" />
    </div>
    <div class="circle" style="z-index: 2; left: 100px; top: 0">
      <img src="../assets/tattoo1.jpg" alt="tattoo 2" />
    </div>
    <div class="circle" style="z-index: 1; left: 200px; top: 50px">
      <img src="../assets/tattoo1.jpg" alt="tattoo 3" />
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
  width: 150px;
  height: 150px;
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
