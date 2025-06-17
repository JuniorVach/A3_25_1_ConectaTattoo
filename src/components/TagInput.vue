<template>
    <div>
        <label class="text-h6 text-grey-4 q-mb-sm block">
            <q-icon name="fas fa-tags" color="red-10" class="q-mr-sm" />
            Tags
        </label>
        <q-input 
            v-model="newTag"
            @keydown.enter.prevent="addTag"
            @keydown.,.prevent="addTag"
            placeholder="Adicione tags (pressione Enter ou vírgula)"
            dark
            standout="bg-grey-10"
            class="q-mb-md"
        />

        <div class="q-gutter-sm q-mb-md">
            <q-chip
                v-for="(tag, index) in modelValue"
                :key="index"
                removable
                @remove="removeTag(tag)"
                color="red-10"
                text-color="black"
                square
            >
                <strong>{{ tag }}</strong>
            </q-chip>
        </div>

        <div class="q-gutter-sm">
            <q-chip
                v-for="tag in predefinedTags"
                :key="tag"
                clickable
                :outline="!modelValue.includes(tag)"
                :color="modelValue.includes(tag) ? 'red-10' : 'grey-8'"
                :text-color="modelValue.includes(tag) ? 'black' : 'white'"
                square
            >
                <strong>{{ tag }}</strong>
            </q-chip>
        </div>
    </div>
</template>

<script setup>
import { ref } from 'vue';

const props = defineProps({
    modelValue: {
        type: Array,
        default: () => []
    }
});

const emit = defineEmits(['update:modelValue']);

const newTag = ref('');
const predefinedTags = ref([
    'gótico', 'tribal', 'old-school', 'blackwork'
]);

const updateTags = (newTags) => {
    emit('update:modelValue', newTags);
};

const addTag = () => {
    const tagValue = newTag.value.trimEnd().toLowerCase();
    if (tagValue && !props.modelValue.includes(tagValue)) {
        updateTags([...props.modelValue, tagValue]);
    }
    newTag.value = '';
};

const removeTag = (tagToRemove) => {
    updateTags(props.modelValue.filter(tag => tag !== tagToRemove));
};

/*
const toogleTag = (tag) => {
    const newTags = [...props.modelValue];
    const index = newTags.indexOf(tag);
    if (index > -1) {
        newTags.splice(index, 1);
    } else {
        newTags.push(tag);
    }
    updateTags(newTags);
}
    */
</script>

<style scoped>
.block {
    display: block;
}
</style>