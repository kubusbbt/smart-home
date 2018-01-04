<template>
    <div>
       
       <div class="wrapper">
            <task title="Lorem ipsum" content="Lock"></task>
            <task title="Lorem ipsum" content="Lock"></task>
            <task title="Lorem ipsum" content="Lock"></task>
            <task title="Lorem ipsum" content="Lock"></task>
        </div>

        <comp-nav></comp-nav>

    </div>
</template>


<script>

    import Vue from 'vue'
    import ButtonComponent from './button.vue'
    import NavComponent from './nav.vue'
    
    Vue.component('task', ButtonComponent)
    Vue.component('comp-nav', NavComponent)

</script>


<style lang="scss">

	body{
		background: url('../assets/bg.jpg');
	}

	.wrapper{
		position: absolute;
		width: 100%;
		left: 0;
		bottom: 70px;
		padding-left: 10px;
		padding-right: 10px;
	}

</style>
