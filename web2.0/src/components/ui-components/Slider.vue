<template>
    <div class="slider-component">
    
        <div class="box-title">
            <h3>{{ sliderTitle }}</h3>
            <!-- <div class="count"><span>3</span> / 9</div> -->
        </div>

        <div class="clearfix"></div>

        <div class="slick">
            <slot></slot>
        </div>

        <div class="scroll"><span></span></div>
    </div>
</template>

<script>
    import $ from 'jquery'

    $(document).ready(function(){
        $('.slick').slick({
            arrows: false,
            variableWidth: true,
            infinite: false,
        });
    })

    export default {
        props: ['sliderTitle']
    }
</script>

<style lang="scss" scoped>
    
    @import 'src/sass/_vars';

    .slider-component{
        padding-left: 20px;
        padding-right: 20px;
        margin-bottom: 30px;
    }

    a{
        text-decoration: none;
        color: unset;
        outline: none;
    }

    .box-title{
        margin-bottom: 20px;
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
    .slick{
        margin-left: -10px;
        margin-right: -10px;
    }
    .slick-slide{ 
        &:active, &:focus{
            outline: none;
            border: none;
        }
    }
    .box{
        box-shadow: 0px 5px 10px -2px rgba(0,0,0,0.2);
        margin-bottom: 10px;

        width: 120px;
        height: 120px;
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
    .scroll{
        width: 100%;
        height: 4px;
        border-radius: 4px;
        background: rgba(0,0,0, .05);
        display: block;
        margin-top: 10px;

        span{
            display: block;
            position: absolute;
            width: 20%;
            height: 4px;
            border-radius: 4px;
            background: $color-primary;
        }
    }

</style>

