<template>
	<div id="app">
		<title-nav></title-nav>
		<br><br><br><br><br><br>

		<slider slider-title="Lorem ipsum">
            <div>
                <div class="box box-default">
                    <a href="#" data-izimodal-open="#modal" data-izimodal-transitionin="fadeInDown">
                        <div class="title">Lorem, ipsum</div>
                        <div class="description"><span>Lorem, ipsum</span> 90%</div>
                        <div class="status">10%</div>
                    </a>
                </div>
            </div>
            <div>
                <div class="box">
                    <a href="#" data-izimodal-open="#modal" data-izimodal-transitionin="fadeInDown">
                        <div class="title">Lorem, ipsum</div>
                        <div class="description"><span>Lorem, ipsum</span> 90%</div>
                        <div class="status">10%</div>
                    </a>
                </div>
            </div>
            <div>
                <div class="box">
                    <a href="#" data-izimodal-open="#modal" data-izimodal-transitionin="fadeInDown">
                        <div class="title">Lorem, ipsum</div>
                        <div class="description"><span>Lorem, ipsum</span> 90%</div>
                        <div class="status">10%</div>
                    </a>
                </div>
            </div>
		</slider>

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
