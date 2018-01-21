<template>
    <div class="title">
        <h4>Start Home</h4>
        <div class="clock">00:00:00</div>
        <div class="date">&nbsp;</div>
        
        <!-- <button>
            <span></span>
            <span></span>
            <span></span>
        </button>
         -->
    </div>
</template>

<script>
export default {
    mounted: function(){
        this.getClock();
        this.getDate();
    },
    methods: {
        getClock: function() {
            function clock() {
                var time = new Date();                 
                var hours = time.getHours();
                var minutes = time.getMinutes();
                var seconds = time.getSeconds();

                document.querySelectorAll('.clock')[0].innerHTML = harold(hours) + ":" + harold(minutes) + ":" + harold(seconds);
                
                function harold(standIn) {
                    if (standIn < 10) {
                        standIn = '0' + standIn
                    }
                    return standIn;
                }
            }
            setInterval(clock, 1000);
        }, 
        getDate: function() {
            let dayName = ['niedziela', 'poniedziałek', 'wtorek', 'środa', 'czwartek', 'piątek', 'sobota'];
            let monthName = ['stycznia', 'lutego', 'marca', 'kwietnia', 'maja', 'czerwca', 'lipca', 'sierpnia', 'września', 'października', 'listopada', 'grudnia'];
            
            let today = new Date() 
            let monht = today.getMonth() 
            let day = today.getDate() 
            let year = today.getFullYear()

            dayName = dayName[today.getDay()] 
            monthName = monthName[today.getMonth()] 

            let date = dayName + ', ' + day + ' ' + monthName + ' ' + year;

            document.querySelectorAll('.date')[0].innerHTML = date;
        }
    }
}
</script>


<style lang="scss" scoped>

    @import 'src/sass/_vars';

    .title{
        background: $color-bg;
        padding: 10px 20px;
        padding-top: 28px;
        text-align: left;
        position: fixed;
        top: 0;
        left: 0;
        width: 100%;
        z-index: 2;
        box-sizing: border-box;

        &:after{
            content: '';
            width: 100%;
            height: 23px;
            background: rgb(66, 66, 66);
            // background: $color-primary;
            display: block;
            position: absolute;
            top: 0;
            left: 0;
        }

        h4{
            color: $color-font-dark;
            margin: 0;
            font-size: 16px;
            font-weight: 600;
        }
        .clock{
            color: $color-font-medium;
            font-size: 12px;
            margin-top: 3px;
        }
        .date{
            color: $color-font-medium;
            font-size: 12px;
        }
    }
    button{
        position: absolute;
        right: 20px;
        top: 25px;
        width: 30px;
        height: 40px;
        background: none;
        border: none;
        outline: none;

        span{
            width: 100%;
            height: 2px;
            background: $color-primary;
            display: block;
            position: absolute;
            left: 0;
            top: 0;
        }
        span:nth-child(2){
            top: 9px;
        }
       span:nth-child(3){
            top: 18px;
        }
    }
</style>

