<<<<<<< HEAD
import MainLayout from 'layouts/MainLayout.vue'
import HomeView from 'pages/HomeView.vue'
import FemininoPage from 'pages/FemininoPage.vue'
import MasculinoPage from 'pages/MasculinoPage.vue'
import TatuadorAuthPage from 'pages/TatuadorAuthPage.vue'
import UserAuthPage from 'pages/UserAuthPage.vue'
import PostTattooPage from 'src/pages/PostTattooPage.vue'
import RegisterOption from 'src/pages/RegisterOption.vue'
=======
import MainLayout from 'layouts/MainLayout.vue';
import HomeView from 'pages/HomeView.vue';
import FemininoPage from 'pages/FemininoPage.vue';
import MasculinoPage from 'pages/MasculinoPage.vue';
import TatuadorAuthPage from 'pages/TatuadorAuthPage.vue';
import UserAuthPage from 'pages/UserAuthPage.vue';
import PostTattooPage from 'src/pages/PostTattooPage.vue';
import RegisterOption from 'src/pages/RegisterOption.vue';
import PerfilPage from 'src/pages/PerfilPage.vue';
>>>>>>> 09312ab (add: novas funcionalidades)

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
<<<<<<< HEAD
      { path: 'post', name: 'postTattoo', component: PostTattooPage, meta: { requiresAuth: true } },
      { path: 'choose', name: 'registerOption', component: RegisterOption },
=======
      { path: 'post', name: 'postTattoo', component: PostTattooPage},
      { path: 'choose', name: 'registerOption', component: RegisterOption },
      { path: 'perfil', name: 'perfilPage', component: PerfilPage }
>>>>>>> 09312ab (add: novas funcionalidades)
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
