<template>	
	<div class="col-50">
		<div class="component">
			<img class="ico" src="../assets/idea.svg" alt="">
			<div>
				<div class="title">{{ title }}</div>
				<!-- <div class="content">{{ content }}</div> -->
				<div class="btn btn-on" @click="getRequest(on)">ON</div>
			</div>
		</div>
	</div>
</template>


<script>

	import axios from 'axios'
	
	export default {
		props: ['title', 'content', 'on'], 

		methods: {
			getRequest: function(href){
				axios.get(href).then(response => console.log(response));
			}
		}
	}
</script>


<style lang="scss">

	.component{
		background: #fff;
		border-radius: 15px;
		position: relative;
		padding: 10px;
		float: left;
		width: 100%;
		margin-bottom: 10px;

		.ico{
			height: 30px;
			margin-bottom: 20px;
		}
		.title{
			font-weight: 600;
			margin-bottom: 7px;
		}
		.content{
			margin-bottom: 8px;
			font-size: .8em;
		}

		.btn{
			width: 50%;
			float: left;
		}
	}

</style>
