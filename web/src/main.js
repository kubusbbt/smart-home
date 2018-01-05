import "./scss/main.scss";

import Vue from 'vue'

import ButtonComponent from './components/button.vue'
import SceneComponent from './components/scene.vue'

Vue.component('task', ButtonComponent)
Vue.component('scene', SceneComponent)


new Vue({

	el: '#app',

	data: {
		showTab: 1
	},

})