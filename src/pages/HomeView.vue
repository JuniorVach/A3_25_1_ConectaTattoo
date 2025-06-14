<template>
  <q-layout view="lHh Lpr lFf" class="bg-dark text-white">
    <q-page-container>
  <q-page class="flex-flex-center">
    <HeroSection />

    <div class="q-pa-lg main-content-container">
      <div class="header-and-filters">
        <h2 class="title-font featured-tattoos-heading">Tattoos em Destaque</h2>

        <div class="filter-buttons-container">
          <q-btn
            label="Newest"
            class="filter-button"
            :class="{ 'active-filter': activeFilter === 'newest' }"
            @click="setFilter('newest')" 
          />
          <q-btn 
            label="Popular"
            class="filter-button"
            :class="{ 'active-filter': activeFilter === 'popular' }"
            @click="setFilter('popular')"
          />
          <q-btn 
            label="Gothic"
            class="filter-button gothic-filter-button"
            :class="{ 'active-filter': activeFilter === 'gothic' }"
            @click="setFilter('gothic')"
          />
          <q-btn 
            label="Traditional"
            class="filter-button"
            :class="{ 'active-filter': activeFilter === 'traditional' }"
            @click="setFilter('traditional')"
          />
        </div>
      </div>
    </div>
    <CardGrid />
    <ArtistSection />
    <NewsletterSection />
  </q-page>
  </q-page-container>
  <AppFooter /> </q-layout>
</template>

<script setup>
import { ref } from 'vue';

const activeFilter = ref('gothic');

const setFilter = (filterName) => {
  activeFilter.value = filterName;
  console.log(`Filter changed to: ${filterName}`);
};

import HeroSection from '../components/HeroSection.vue';
import CardGrid from '../components/CardGrid.vue';
import ArtistSection from 'src/components/ArtistSection.vue';
import NewsletterSection from 'src/components/NewsletterSection.vue';
import AppFooter from 'src/components/AppFooter.vue';
</script>

<style scoped>
.main-content-container {
  max-width: 1280px;
  margin-left: auto;
  margin-right: auto;
  padding: 48px 16px;

  @media (min-width: 640px) {
    padding-left: 24px;
    padding-right: 24px;
  }

  @media (min-width: 1024px) {
    padding-left: 32px;
    padding-right: 32px;
  }
}

.header-and-filters {
  display: flex;
  justify-content: space-between;
  align-items: center;
  margin-bottom: 32px;

  @media (max-width: 767px) {
    flex-direction: column;
    align-items: flex-start;
    .filter-buttons-container {
      margin-top: 16px;
      width: 100%;
      justify-content: flex-start;
    }
  }
}

.featured-tattoos-heading {
  font-size: 2.25rem;
  line-height: 2.5rem;
  color: #DC143C;
}

.filter-buttons-container {
  display: flex;
  gap: 16px;

  .q-btn {
    padding: 8px 16px;
    background-color: #2D2D2D;
    color: white;
    border-radius: 6px;
    transition: background-color 0.3s ease;
    text-transform: none;

    &:hover {
      background-color: #8A0303;
      &:hover {
        background-color: #DC143C;
      }
    }

    &.active-filter {
      background-color: #DC143C;
      pointer-events: none;
      opacity: 0.9;
    }
  }
}
</style>
