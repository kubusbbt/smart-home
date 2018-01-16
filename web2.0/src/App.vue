<template>
	<div id="app">
		<title-nav></title-nav>
		<br><br><br><br><br><br>

        <div class="modal" v-if="service.showModal" @click="hideModal">
            <button class="btn btn-primary" @click="modalOn">ON</button>
            <button class="btn btn-default" @click="modalOff">OFF</button>
        </div>

		<slider slider-title="Gniazdka">
            <div v-for="socket in service.devices.sockets">
                <div class="box" v-bind:class="socket.class" @click="showModal(socket)">
                    <div class="title">{{ socket.title }}</div>
                    <div class="description"><span>{{ socket.description }}</span></div>
                    <div class="status">{{ socket.status }}</div>
                </div>
            </div>
		</slider>
		
        <slider slider-title="Żarówki">
            <div v-for="bulb in service.devices.bulbs" @click="showModal(bulb)">
                <div class="box" v-bind:class="bulb.class">
                    <div class="title">{{ bulb.title }}</div>
                    <div class="description"><span>{{ bulb.description }}</span></div>
                    <div class="status">{{ bulb.status }}</div>
                </div>
            </div>
		</slider>
       
        <slider slider-title="Sceny">
            <div v-for="scene in service.devices.scenes" @click="activateScene(scene)">
                <div class="box" v-bind:class="scene.class">
                    <div class="title">{{ scene.title }}</div>
                    <div class="description"><span>{{ scene.description }}</span></div>
                    <div class="status">{{ scene.status }}</div>
                </div>
            </div>
		</slider>

	</div>
</template>

<script>
    import service from "./service.js";
    import $ from 'jquery'

	export default {
		data: function() {
			return service;
        },
        methods: {
            showModal: function(device) {
                this.service.activeDevice = device
                this.service.showModal = true
                document.getElementById('app').classList.add('modal-open')
            },
            hideModal: function() {
                this.service.activeDevice = null
                this.service.showModal = false
                document.getElementById('app').classList.remove('modal-open')
            },
            modalOn: function() {
                // console.log( this.service.activeDevice.commands.on )
                this.ajaxRequest( this.service.activeDevice.commands.on )
            },
            modalOff: function() {
                console.log( this.service.activeDevice.commands.off )
            },
            activateScene: function(scene) {
                for( var command in scene.commands ){
                    console.log( scene.commands[command] )
                }
            },
            ajaxRequest: function(command) {
                $.ajax({
                    url: 'http://cod3r.pl/smart-home/tcp-service/',
                    type: 'POST',
                    data: {hash: '123qwe', command: command},

                    success: function(data) {
                        console.log(data);
                    }
                });
            }
        },
		name: "App"
	};
</script>
