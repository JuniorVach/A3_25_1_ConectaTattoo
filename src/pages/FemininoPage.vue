<template>
  <section id="principal">
    <figure id="primeira-linha-imagens">
      <img src="../assets/tatuagens/feminino/Ftattoo1.png" alt="Flores no braço" />
      <img src="../assets/tatuagens/feminino/Ftattoo2.png" alt="Peixe nas costas" />
      <img src="../assets/tatuagens/feminino/Ftattoo3.png" alt="Flores no ombro" />
      <img src="../assets/tatuagens/feminino/Ftattoo4.png" alt="Leão florido nas costas" />
    </figure>
    <figure id="segunda-linha-imagens">
      <img src="../assets/tatuagens/feminino/Ftattoo5.png" alt="Ramos no peito" />
      <img src="../assets/tatuagens/feminino/Ftattoo6.png" alt="Flores na costela" />
      <img src="../assets/tatuagens/feminino/Ftattoo7.png" alt="Índia no quadril" />
      <img src="../assets/tatuagens/feminino/Ftattoo8.png" alt="Frase no ombro" />
    </figure>
    <figure id="terceira-linha-imagens">
      <img src="../assets/tatuagens/feminino/Ftattoo9.png" alt="Lotus no pulso" />
      <img src="../assets/tatuagens/feminino/Ftattoo10.png" alt="Lotus atrás da orelha" />
      <img src="../assets/tatuagens/feminino/Ftattoo11.png" alt="Tartaruga marinha no braço" />
      <img src="../assets/tatuagens/feminino/Ftattoo12.png" alt="Medusa no braço" />
    </figure>
  </section>
  <AppFooter />
</template>

<script setup>
import AppFooter from 'src/components/AppFooter.vue';
</script>

<style scoped>
section#principal {
  background-color: var(--q-dark);
  padding-top: 20px;
}

img {
  width: 300px; /* Definido aqui para todas as imagens, para simplificar */
  height: 300px; /* Definido aqui para todas as imagens, para simplificar */
  margin-bottom: 20px;
  border-radius: 10px;
  /* Adicionado transição para a animação suave */
  transition: transform 0.3s ease-in-out, box-shadow 0.3s ease-in-out;
  cursor: pointer; /* Indica que a imagem é interativa */
}

/* Efeito de hover */
img:hover {
  transform: scale(1.05); /* Aumenta a imagem em 5% */
  box-shadow: 0 0 20px rgba(255, 255, 255, 0.3); /* Sombra branca suave com desfoque */
}

#primeira-linha-imagens,
#segunda-linha-imagens,
#terceira-linha-imagens {
  display: flex;
  justify-content: center;
  align-items: center;
  gap: 30px;
}

/* somente se for abrir a foto */
#principal #primeira-linha-imagens img:target,
#principal #segunda-linha-imagens img:target,
#principal #terceira-linha-imagens img:target {
  position: fixed;
  width: 50%;
  top: 20px;
  left: 25%;
}
</style>
