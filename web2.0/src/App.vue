<template>
	<div id="app">

		<title-nav></title-nav>

		<br>
		<br>
		<br>
		<br>

<div class="slider">
	<div>
		Lorem ipsum dolor sit amet consectetur adipisicing elit. Soluta dolores quas, alias autem molestias harum ad accusantium porro vitae, dolorum sed dignissimos incidunt quae nostrum exercitationem eum! Modi reprehenderit quae odio cum sit nisi laboriosam quas, velit, animi sed corporis voluptatem distinctio tempora ratione eligendi cumque dolores error repellat incidunt doloribus est eos vel unde illum. Cumque ducimus omnis facilis et voluptate reiciendis quaerat quas aliquam repellat, iure enim deserunt nisi quibusdam maiores doloribus, ratione dolor illo. Tenetur eius optio non similique exercitationem inventore sequi. Sit officiis reiciendis suscipit dolor sed exercitationem officia fugit, cupiditate ea, recusandae id maiores accusantium?
	</div>
	<div>
		Lorem ipsum dolor sit amet consectetur adipisicing elit. Soluta dolores quas, alias autem molestias harum ad accusantium porro vitae, dolorum sed dignissimos incidunt quae nostrum exercitationem eum! Modi reprehenderit quae odio cum sit nisi laboriosam quas, velit, animi sed corporis voluptatem distinctio tempora ratione eligendi cumque dolores error repellat incidunt doloribus est eos vel unde illum. Cumque ducimus omnis facilis et voluptate reiciendis quaerat quas aliquam repellat, iure enim deserunt nisi quibusdam maiores doloribus, ratione dolor illo. Tenetur eius optio non similique exercitationem inventore sequi. Sit officiis reiciendis suscipit dolor sed exercitationem officia fugit, cupiditate ea, recusandae id maiores accusantium?
	</div>
	<div>
		Lorem ipsum dolor sit amet consectetur adipisicing elit. Soluta dolores quas, alias autem molestias harum ad accusantium porro vitae, dolorum sed dignissimos incidunt quae nostrum exercitationem eum! Modi reprehenderit quae odio cum sit nisi laboriosam quas, velit, animi sed corporis voluptatem distinctio tempora ratione eligendi cumque dolores error repellat incidunt doloribus est eos vel unde illum. Cumque ducimus omnis facilis et voluptate reiciendis quaerat quas aliquam repellat, iure enim deserunt nisi quibusdam maiores doloribus, ratione dolor illo. Tenetur eius optio non similique exercitationem inventore sequi. Sit officiis reiciendis suscipit dolor sed exercitationem officia fugit, cupiditate ea, recusandae id maiores accusantium?
	</div>
</div>


	</div>
</template>

<script>
	import data from "./service.js";
	import $ from "jquery";

	export default {
		data: function() {
			return data;
		},
		name: "App",
		mounted: function(){

			$(".slider").slick({
				// arrows: false,
				// dots: true,
			});

		}
	};

</script>

<style type="scss" scoped>

</style>
