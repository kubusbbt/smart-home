<template>
	<div id="app">


			<title-nav></title-nav>
			<navbar></navbar>

			<div uk-slideshow="animation: slide">
				<div id="slider" class="uk-position-relative uk-visible-toggle uk-light">
					<ul class="uk-slideshow-items" uk-height-viewport="min-height: 300">
						<li>
							<div>
								<h2 class="screen-title">Lorem ipsum</h2>

								<card card-type="uk-card-default" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card>
								<!-- <card card-type="uk-card-primary" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card> -->
								<!-- <card card-type="uk-card-secondary" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card> -->
							</div>
						</li>
						<li>
							<h2 class="screen-title">Lorem ipsum</h2>
							<!-- <card card-type="uk-card-primary" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card> -->
						</li>
					</ul>
				</div>
				<ul class="uk-slideshow-nav uk-dotnav uk-flex-center uk-margin"></ul>
			</div>

			<!-- <title-nav></title-nav> -->
			<!-- <navbar></navbar> -->

			<!-- <alert>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt.</alert> -->

			<!-- <br> -->

			<!-- <div class="uk-child-width-1-1 uk-grid-small uk-grid-match" uk-grid>
				<card card-type="uk-card-default" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card>
				<card card-type="uk-card-primary" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card>
				<card card-type="uk-card-primary" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card>
				<card card-type="uk-card-primary" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card>
				<card card-type="uk-card-primary" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card>
				<card card-type="uk-card-secondary" card-title="Lorem ipsum">Lorem ipsum dolor sit amet</card>
			</div> -->

			<!-- <card image="https://getuikit.com/docs/images/light.jpg" orientation="left" card-title="Media Left">Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt.</card> -->
			<!-- <card image="https://getuikit.com/docs/images/light.jpg" orientation="right" card-title="Media Right">Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt.</card> -->
			
	</div>
</template>

<script>
	import data from "./service.js";

	export default {
		data: function() {
			return data;
		},
		name: "App"
	};
</script>

<style type="scss" scoped>
	#slider{
		/* height: calc( 100vh - 120px ); */
		/* background: green; */
	}
	.screen-title{
		margin-left: 20px;
	}
</style>
