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
        <div class="skull skull-5">
            <q-icon name="fas fa-skull" class="skull-icon" />
        </div>
        <div class="skull skull-6">
            <q-icon name="fas fa-skull" class="skull-icon" />
        </div>
        <div class="skull skull-7">
            <q-icon name="fas fa-skull" class="skull-icon" />
        </div>
        <div class="skull skull-8">
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
    box-shadow: 0 0 15px 5px rgba(220, 20, 60, 0.7);
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
}
.skull-1 .skull-icon {
  font-size: 1.875rem;
}

.skull-2 {
  top: 70%;
  left: 80%;
  transform: rotate(25deg);
}
.skull-2 .skull-icon {
  font-size: 2.25rem;
}

.skull-3 {
  top: 30%;
  left: 85%;
  transform: rotate(10deg);
}
.skull-3 .skull-icon {
  font-size: 1.875rem;
}

.skull-4 {
  top: 80%;
  left: 15%;
  transform: rotate(-25deg);
}
.skull-4 .skull-icon {
  font-size: 1.875rem;
}

.skull-5 {
  top: 20%;
  left: 60%;
  transform: rotate(-5deg);
}
.skull-5 .skull-icon {
  font-size: 2rem;
}

.skull-6 {
  top: 65%;
  left: 40%;
  transform: rotate(15deg);
}
.skull-6 .skull-icon {
  font-size: 2.5rem;
}

.skull-7 {
  top: 45%;
  left: 20%;
  transform: rotate(-20deg);
}
.skull-7 .skull-icon {
  font-size: 1.5rem;
}

.skull-8 {
  top: 15%;
  left: 30%;
  transform: rotate(10deg);
}
.skull-8 .skull-icon {
  font-size: 2rem;
}

@keyframes glow {
  from {
    box-shadow: 0 0 10px 3px rgba(220, 20, 60, 0.5),
                inset 0 0 10px 3px rgba(220, 20, 60, 0.3);
  }
  to {
    box-shadow: 0 0 15px 5px rgba(220, 20, 60, 0.7),
                inset 0 0 15px 5px rgba(220, 20, 60, 0.5);
  }
}
</style>