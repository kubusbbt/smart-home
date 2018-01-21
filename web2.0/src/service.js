let devices = 
{
    sockets: 
    [
        {
            name: 'clarus_3',
            title: 'Sypialnia',
            description: 'Gniazdko w sypialni za łózkiem',
            status: 'click',
            class: 'box-default',
            commands: {
                on: "A010001010101011100000011",
                off: "A010001010101011100001100"
            }
        },
        {
            name: 'clarus_2',
            title: 'Home',
            description: 'Napis home w salonie',
            status: 'click',
            class: '',
            commands: {
                on: "A010001010101010111000011",
                off: "A010001010101010111001100"
            }
        },
        {
            name: 'dpm_1',
            title: 'dpm_1',
            description: '___',
            status: 'click',
            class: '',
            commands: {
                on: "0100011001011010000011110",
                off: "0100011001011010000001110"
            }
        },
        {
            name: 'dpm_2',
            title: 'dpm_2',
            description: '___',
            status: 'click',
            class: '',
            commands: {
                on: "0100011001011010000010110",
                off: "0100011001011010000000110"
            }
        },
        {
            name: 'dpm_3',
            title: 'dpm_3',
            description: '___',
            status: 'click',
            class: '',
            commands: {
                on: "0100011001011010000011010",
                off: "0100011001011010000001010"
            }
        },
    ],
    bulbs: [
        {
            name: 'yellight_1',
            title: 'Zarówka',
            description: 'Lampka w salonie',
            status: 'click',
            class: 'bg5',
            commands: {
                on: "B200",
                off: "B201"
            }
        }
    ],
    scenes: [
        {
            name: 'tv',
            title: 'TV',
            description: 'Oglądanie TV',
            status: 'click',
            class: 'bg3',
            commands: {
                on: "C300"
            }
        },
        {
            name: 'sypialnia',
            title: 'Sypialnia',
            description: 'Sypialnia',
            status: 'click',
            class: 'bg4',
            commands: {
                on: "C301"
            }
        },
        {
            name: 'spac',
            title: 'Spać',
            description: 'Wyłącza wszystko',
            status: 'click',
            class: 'bg2',
            commands: {
                on: "C302"
            }
        }
    ]
}


var service = {
    service:{
        viewStep: 1,
        showModal: false,
        devices: devices,
        activeDevice: null
    }
}

export default service;
