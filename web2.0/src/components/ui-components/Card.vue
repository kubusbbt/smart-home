<template>
    <div>
        
        <div v-if="image !== undefined" class="uk-card uk-card-default uk-grid-collapse uk-child-width-1-2@s uk-margin" uk-grid>
            <div v-bind:class="getOrientation()" class="uk-cover-container">
                <img src="https://getuikit.com/docs/images/light.jpg" alt="" uk-cover>
                <canvas width="600" height="400"></canvas>
            </div>
            <div>
                <div class="uk-card-body">
                    <h3 class="uk-card-title">{{ cardTitle }}</h3>
                    <p>
                        <slot></slot>
                    </p>
                </div>
            </div>
        </div>

        <div v-if="image === undefined">
            <div v-bind:class="cardType" class="uk-card uk-card-body">
                <h3 class="uk-card-title">{{ cardTitle }}</h3>
                <p>
                    <slot></slot>
                    
                    <div class="uk-button-group">
                        <button class="uk-button uk-button-primary">ON</button>
                        <button class="uk-button uk-button-primary">OFF</button>
                    </div>
                </p>
            </div>
        </div>
        
    </div>
</template>

<script>
export default {
    props: ['orientation', 'cardTitle', 'image', 'cardType'],
    methods: {
        getOrientation: function(){
            if( this.orientation === 'left' ){
                return 'uk-card-media-left'
            }else{
                return 'uk-flex-last@s uk-card-media-right'
            }
        }
    }
}
</script>


<style scoped>
    .uk-card-default{
        background: #e4e4e4;
    }
</style>

