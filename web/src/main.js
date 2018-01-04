import "./scss/main.scss";

import Vue from 'vue'

import rootComponent from './components/root.vue';

Vue.component('app', rootComponent)

new Vue({
	el: '#app'
})