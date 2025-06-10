import { createRouter, createWebHistory } from 'vue-router'
import HomeView from '../pages/HomeView.vue'
import IndexPage from '../pages/IndexPage.vue'
import FemininoPage from '../pages/FemininoPage.vue'
import MasculinoPage from '../pages/MasculinoPage.vue'

const router = createRouter({
  history: createWebHistory(import.meta.env.BASE_URL),
  routes: [
    {
    path: '/',
    component: HomeView,
    children: [
      {
        path: '',
        name: 'home',
        component: IndexPage,
      },
      {
        path: 'categorias/feminino',
        name: 'categoriaFeminino',
        component: FemininoPage,
      },
      {
        path: 'categorias/masculino',
        name: 'categoriaMasculino',
        component: MasculinoPage,
      },
    ],
  },
  ],
})

export default router
