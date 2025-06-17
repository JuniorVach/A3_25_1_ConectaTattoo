import MainLayout from 'layouts/MainLayout.vue';
import HomeView from 'pages/HomeView.vue';
import FemininoPage from 'pages/FemininoPage.vue';
import MasculinoPage from 'pages/MasculinoPage.vue';
import TatuadorAuthPage from 'pages/TatuadorAuthPage.vue';
import UserAuthPage from 'pages/UserAuthPage.vue';
import PostTattooPage from 'src/pages/PostTattooPage.vue';
import RegisterOption from 'src/pages/RegisterOption.vue';
import PerfilPage from 'src/pages/PerfilPage.vue';

const routes = [
  {
    path: '/',
    component: MainLayout,
    children: [
      { path: '', name: 'home', component: HomeView },
      { path: 'feminino', name: 'categoriaFeminino', component: FemininoPage },
      { path: 'masculino', name: 'categoriaMasculino', component: MasculinoPage },
      { path: 'tatuador', name: 'tatuadorAuth', component: TatuadorAuthPage },
      { path: 'login', name: 'userAuth', component: UserAuthPage },
      { path: 'post', name: 'postTattoo', component: PostTattooPage},
      { path: 'choose', name: 'registerOption', component: RegisterOption },
      { path: 'perfil', name: 'perfilPage', component: PerfilPage }
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
