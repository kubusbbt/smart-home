<template>	
	<div class="col-33">
		<div class="component">
			<img class="ico" src="../assets/idea.svg" alt="">
			<div>
				<div class="title">{{ title }}</div>
				<div class="content">{{ content }}</div>
				<div class="btn btn-on">ON</div>
				<div class="btn btn-off">OFF</div>
			</div>
		</div>
	</div>
</template>


<script>
	export default {
		props: ['title', 'content']
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
		}

		.content{
			margin-bottom: 5px;
		}
	}

</style>
