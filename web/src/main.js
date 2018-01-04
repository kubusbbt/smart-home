import "./scss/main.scss";

import Vue from 'vue'

import homeComponent from './components/home.vue'


new Vue({
	el: '#app',
	components: {
		'app': homeComponent
	}
})