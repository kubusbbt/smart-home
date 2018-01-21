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
                on: 100,
                off: 101
            }
        },
        {
            name: 'clarus_2',
            title: 'Home',
            description: 'Napis home w salonie',
            status: 'click',
            class: '',
            commands: {
                on: 102,
                off: 103
            }
        },
        {
            name: 'dpm_1',
            title: 'dpm_1',
            description: '___',
            status: 'click',
            class: '',
            commands: {
                on: 104,
                off: 105
            }
        },
        {
            name: 'dpm_2',
            title: 'dpm_2',
            description: '___',
            status: 'click',
            class: '',
            commands: {
                on: 106,
                off: 107
            }
        },
        {
            name: 'dpm_3',
            title: 'dpm_3',
            description: '___',
            status: 'click',
            class: '',
            commands: {
                on: 108,
                off: 109
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
                on: 200,
                off: 201
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
                on: 300
            }
        },
        {
            name: 'sypialnia',
            title: 'Sypialnia',
            description: 'Sypialnia',
            status: 'click',
            class: 'bg4',
            commands: {
                on: 301
            }
        },
        {
            name: 'spac',
            title: 'Spać',
            description: 'Wyłącza wszystko',
            status: 'click',
            class: 'bg2',
            commands: {
                on: 302
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
