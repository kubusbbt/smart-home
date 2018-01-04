<template>
	<div>

		<div class="wrapper">
		
			<div class="col-33">
				<div class="component">
					<img class="ico" src="../assets/idea.svg" alt="">
					<div>
						<div class="title">lorem ipsum</div>
						<div class="content">Lock</div>
						<div class="btn btn-on">ON</div>
						<div class="btn btn-off">OFF</div>
					</div>
				</div>
			</div>

			<div class="col-33">
				<div class="component">
					<img class="ico" src="../assets/idea.svg" alt="">
					<div>
						<div class="title">lorem ipsum</div>
						<div class="content">Lock</div>
						<div class="btn btn-on">ON</div>
						<div class="btn btn-off">OFF</div>
					</div>
				</div>
			</div>

			<div class="col-33">
				<div class="component">
					<img class="ico" src="../assets/idea.svg" alt="">
					<div>
						<div class="title">lorem ipsum</div>
						<div class="content">Lock</div>
						<div class="btn btn-on">ON</div>
						<div class="btn btn-off">OFF</div>
					</div>
				</div>
			</div>

		</div>

		<nav>
			<ul>
				<li>Nav 1</li>
				<li>Nav 2</li>
				<li>Nav 3</li>
			</ul>
		</nav>

	</div>
</template>

<style lang="scss">

	body{
		// background: url('../assets/bg.jpg');
		background: #363A39;
	}

	.wrapper{
		position: absolute;
		
		width: 100%;
		left: 0;
		bottom: 70px;
		padding-left: 10px;
		padding-right: 10px;
	}

	.component{
		background: #fff;
		border-radius: 15px;
		position: relative;
		padding: 10px;
		float: left;
		width: 100%;

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
