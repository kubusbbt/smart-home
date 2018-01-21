<template>
    <div class="slider-component">
    
        <div class="box-title">
            <h3>{{ sliderTitle }}</h3>
        </div>

        <div class="clearfix"></div>

        <div class="wrapper">
            <div class="scrolls">
                <slot></slot>
            </div>
        </div>

    </div>
</template>

<script>
    export default {
        props: ['sliderTitle']
    }
</script>

<style lang="scss" scoped>
    
    @import 'src/sass/_vars';


    .wrapper { 
        width: 100%;
        display: inline-block;
    }
    .scrolls { 
        overflow-x: scroll;
        -webkit-overflow-scrolling: touch;
        overflow-y: hidden;
        // white-space:nowrap;
        display: flex;
        height: 120px;
        margin-left: -10px;
        margin-right: -10px;
    }

    .slider-component{
        padding-left: 20px;
        padding-right: 20px;
        margin-bottom: 10px;
    }

    a{
        text-decoration: none;
        color: unset;
        outline: none;
    }

    .box-title{
        margin-bottom: 13px;
        float: left;
        width: 100%;

        h3{
            font-size: 15px;
            float: left;
            opacity: .6;
        }
        .count{
            float: right;
            font-size: 15px;
            color: $color-font-medium;

            span{
                color: $color-primary;
            }
        }
    }

    .box{
        box-shadow: 0px 5px 10px -2px rgba(0,0,0,0.2);
        margin-bottom: 10px;

        width: 100px;
        height: 100px;
        background: #fff;
        margin-left: 10px;
        margin-right: 10px;
        border-radius: 10px;
        padding: 15px;
        box-sizing: border-box;

        .title{
            font-size: 15px;
			font-weight: 600;
        }
        .description{
            font-size: 11px;
            margin-top: 5px;

            span{
                opacity: .6;
            }
        }
        .status{
            font-size: 40px;
			margin-top: 10px;
			display: none;
        }
    }

    .box-default{
        background: $color-primary;
        background-image: url('../../assets/bg.jpg');
        background-size: 100% 100%;

        .title, .description, .status{
            color: #fff;
        }
    }

    .bg2{
        background-size: 100% 100%;
        background-image: url('../../assets/bg2.jpg');
        

        .title, .description, .status{
            color: #fff;
        }
    }
    .bg3{
        background-size: 100% 100%;
        background-image: url('../../assets/bg3.jpg');

        .title, .description, .status{
            color: #fff;
        }
    }
    .bg4{
        background-size: 100% 100%;
        background-image: url('../../assets/bg4.jpg');

        .title, .description, .status{
            color: #fff;
        }
    }

    .bg5{
        background-size: 100% 100%;
        background-image: url('../../assets/bg5.jpg');

        .title, .description, .status{
            color: #fff;
        }
    }

</style>

