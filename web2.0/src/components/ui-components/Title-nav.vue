<template>
    <div class="title uk-grid uk-grid-collapse">
        <div class="uk-column-1-1">
            <h4>Lorem Ipsum</h4>
            <div class="clock">00:00:00</div>
            <div class="date">&nbsp;</div>
            
            <button uk-toggle="target: #offcanvas-usage">
                <span></span>
                <span></span>
                <span></span>
            </button>
        </div>
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
            background: #fff;
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

    .title{
        background: rgba(0,0,0, 0.7);
        // padding: 10px 20px;
        padding-top: 10px;
        padding-left: 10px;
        text-align: left;
        position: fixed;
        top: 0;
        left: 0;
        width: 100%;
        z-index: 2;
        height: 65px;

        h4{
            color: #fff;
            margin: 0;
            font-size: 14px;
        }
        .clock{
            color: rgba(255, 255, 255, .5);
            font-size: 12px;
        }
        .date{
            color: rgba(255, 255, 255, .5);
            font-size: 12px;
        }
        // nav{
        //     height: 100%;
        // }
        // ul{
        //     list-style: none;  
        //     width: 100%;
        //     height: 100%;
        //     display: flex;
        //     justify-content: flex-start;
        //     align-content: center;
        //     padding: 0;
        //     margin: 0;
        // }
        // li{
        //     margin: 0 20px;
        //     color: #fff;
        //     display: flex;
        //     align-items: center;

        //     &:first-child{
        //         margin-left: 0;
        //     }
        // }
    }
</style>

