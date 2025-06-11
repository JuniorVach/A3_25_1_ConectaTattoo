<template>
  <section id="principal">
    <figure id="primeira-linha-imagens">
      <img src="../assets/tatuagens/masculino/Mtattoo1.png" alt="Leão e Jesus" />
      <img src="../assets/tatuagens/masculino/Mtattoo2.png" alt="Frase na perna" />
      <img src="../assets/tatuagens/masculino/Mtattoo3.png" alt="Aguia no braço" />
      <img src="../assets/tatuagens/masculino/Mtattoo4.png" alt="Posseidon" />
    </figure>
    <figure id="segunda-linha-imagens">
      <img src="../assets/tatuagens/masculino/Mtattoo5.png" alt="Barco na costela" />
      <img src="../assets/tatuagens/masculino/Mtattoo6.png" alt="Cruz e asas e Blessed" />
      <img src="../assets/tatuagens/masculino/Mtattoo7.png" alt="Tattoo no peito" />
      <img src="../assets/tatuagens/masculino/Mtattoo8.png" alt="Tattoo nas costas" />
    </figure>
    <figure id="terceira-linha-imagens">
      <img src="../assets/tatuagens/masculino/Mtattoo9.png" alt="Tattoo no braço" />
      <img src="../assets/tatuagens/masculino/Mtattoo10.png" alt="Tattoo na panturrilha" />
      <img src="../assets/tatuagens/masculino/Mtattoo11.png" alt="Tattoo na mao" />
      <img src="../assets/tatuagens/masculino/Mtattoo12.png" alt="Coruja" />
    </figure>
  </section>
</template>

<script setup></script>

<style scoped>
img {
  width: 150px;
  height: 124px;
}

#primeira-linha-imagens,
#segunda-linha-imagens,
#terceira-linha-imagens {
  margin-top: 10px;
  display: flex;
  justify-content: center;
  align-items: center;
  gap: 30px;
}

#primeira-linha-imagens img {
  margin-top: 20px;
}

#primeira-linha-imagens img,
#segunda-linha-imagens img,
#terceira-linha-imagens img {
  width: 300px;
  height: 300px;
  margin-bottom: 20px;
  border-radius: 10px;
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
