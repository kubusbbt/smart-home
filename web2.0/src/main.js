import uikitcss from '../node_modules/uikit/dist/css/uikit.min.css'
import uikitjs from '../node_modules/uikit/dist/js/uikit.min.js'

import mainScss from './sass/main.scss';

import Vue from 'vue'
import App from './App'
import Titlenav from "./components/ui-components/Title-nav";
import Alert from "./components/ui-components/Alert";
import Card from "./components/ui-components/Card";
import Navbar from "./components/ui-components/Navbar";

Vue.config.productionTip = false


Vue.component('title-nav', Titlenav)
Vue.component('alert', Alert)
Vue.component('card', Card)
Vue.component('navbar', Navbar)


new Vue({
  el: '#app',
  components: { App },
  template: '<App/>'
})