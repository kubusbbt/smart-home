<?php

class Tcp{
    private $command;

    private $service_port = 1000;
    private $address = "192.168.1.14";

    function __construct()
    {
        $this->command = $_POST['command'];

        $socket = $this->create_socket();
        
        if( $socket ){
            $connect = $this->connect_socket($socket);

            if( $connect ){
                $this->write_socket($socket);
                echo 'OK';
            }
        }
    }

    private function create_socket() 
    {
        $socket = socket_create(AF_INET, SOCK_STREAM, SOL_TCP);
        return $socket;
    }

    private function connect_socket($socket)
    {
        $result = socket_connect($socket, $this->address, $this->service_port);
        return $result;
    }

    private function write_socket($socket)
    {
        // socket_write($socket, intval($this->command), strlen($this->command));
        socket_write($socket, $this->command, strlen($this->command));
        // socket_write($socket, "B" . "201", 4);
    }

}

$tcp = new Tcp;