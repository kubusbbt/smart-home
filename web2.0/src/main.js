
Vue.config.productionTip = false


import slick from '../node_modules/slick-carousel/slick/slick.min.js'
// import rangeSlider from './vendor/ion.rangeSlider-2.2.0/js/ion-rangeSlider/ion.rangeSlider.min.js'

import mainScss from './sass/main.scss'

import Vue from 'vue'
import App from './App'



/******************* Components ********************/
import Titlenav from "./components/ui-components/Title-nav"
import Slider from "./components/ui-components/Slider-scroll"

Vue.component('title-nav', Titlenav)
Vue.component('slider', Slider)



// $("#example_id").ionRangeSlider({
// 	min: 0,
// 	max: 100,
// 	from: 50,
// 	hide_min_max: true,
// 	hide_from_to: true,
// });


new Vue({
	el: '#app',
	components: { App },
	template: '<App/>'
})