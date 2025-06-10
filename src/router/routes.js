import HomeView from '../pages/HomeView.vue';
import IndexPage from '../pages/IndexPage.vue';
import FemininoPage from '../pages/FemininoPage.vue';
import MasculinoPage from '../pages/MasculinoPage.vue';

const routes = [
  {
    path: '/',
    component: HomeView,
    children: [
      { path: '', name: 'home', component: IndexPage },
      { path: 'categorias/feminino', name: 'categoriaFeminino', component: FemininoPage },
      { path: 'categorias/masculino', name: 'categoriaMasculino', component: MasculinoPage },
    ],
  },

  // Always leave this as last one,
  // but you can also remove it
  {
    path: '/:catchAll(.*)*',
    component: () => import('pages/ErrorNotFound.vue'),
  },
]

export default routes
