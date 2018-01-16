let devices = 
{
    sockets: 
    [
        {
            name: 'clarus_1',
            title: 'Sypialnia',
            description: 'Gniazdko w sypialni za łózkiem',
            status: 'click',
            class: 'box-default',
            commands: {
                on: 1,
                off: 2
            }
        },
        {
            name: 'clarus_2',
            title: 'Home',
            description: 'Napis home w salonie',
            status: 'click',
            class: '',
            commands: {
                on: 3,
                off: 4
            }
        }
    ],
    bulbs: [
        {
            name: 'yellight_1',
            title: 'Zarówka',
            description: 'Lampka w salonie',
            status: 'click',
            class: '',
            commands: {
                on: 5,
                off: 6
            }
        }
    ],
    scenes: [
        {
            name: 'tv',
            title: 'TV',
            description: 'Oglądanie TV',
            status: 'click',
            class: '',
            commands: [7, 8]
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
