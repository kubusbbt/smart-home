<?php

class Tcp{
    private $command;

    private $service_port = 1000;
    private $address = "192.168.1.14";

    function __construct()
    {
        if( !$_POST ){
            exit('err-post');
        }

        if( $_POST['hash'] !== '123qwe' ){
            exit('err-hash');
        }

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
        socket_write($socket, intval($this->command), strlen($this->command));
    }

}

$tcp = new Tcp;