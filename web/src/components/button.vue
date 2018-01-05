<template>	
	<div class="col-50">
		<div class="component">
			
			<img v-show="type === 'bulb'" class="ico" src="../assets/idea.svg" alt="">
			<img v-show="type === 'plug'" class="ico" src="../assets/plug.svg" alt="">
			
			<div>
				<div class="title">{{ title }}</div>
				<!-- <div class="content">{{ content }}</div> -->
			
				<div class="btn btn-on" @click="getRequest(on)">ON</div>
				<div class="btn btn-off" @click="getRequest(off)">OFF</div>
			</div>
		</div>
	</div>
</template>


<script>

	import axios from 'axios'
	
	export default {
		props: [
			'type', 'title', 'content', 'on', 'off'
		], 
		methods: {
			getRequest: function(href){
				// href = 'http://192.168.1.14' + href;

				document.getElementById('loader').style.display = 'block';
				
				axios.get(href).catch(function(){
					document.getElementById('loader').style.display = 'none';
				});
				
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
			margin-bottom: 10px;
		}
		.title{
			font-weight: 600;
			margin-bottom: 7px;
			font-size: .8em;
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
