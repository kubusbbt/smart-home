<template>
  <div id="app">
    <img src="./assets/logo.png">
    {{ viewStep }}
  </div>
</template>

<script>

import data from './service.js';

export default {
  data: function() {
    return data
  },
  name: 'App'
}
</script>

<style>
#app {
  font-family: 'Avenir', Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 60px;
}
</style>
