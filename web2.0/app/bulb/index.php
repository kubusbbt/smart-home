<?php

$hash = kuba123;

$colors = [
	'white' => 0xFFFFFF,
	'red' => 0xFF0000,
	'blue' => 0x1736F6,
];

$scene = [
	'film' => [
		'color' => 0x141432,
		'bright' => 45
	],
	'sleep' => [
		'color' => 0x2C5777,
		'bright' => 7
	]
];



if( !isset($_GET['hash']) || empty($_GET['hash']) ){
	exit('Exit');
}

if( $_GET['hash'] !== $hash ){
	exit('Pass');
}


require "Yeelight-PHP/Yeelight.class.php";
$yee = new Yeelight("192.168.1.16", 55443);

if( isset($_GET['scene']) )
{
	$yee->set_power('on');
	$yee->set_rgb($scene[$_GET['scene']]['color']);
	$yee->set_bright($scene[$_GET['scene']]['bright']);
}
else
{
	if( isset( $_GET['mode'] ) )
	{
		$yee->set_power( $_GET['mode'] );
	}

	if( isset($_GET['color']) )
	{	
		$yee->set_rgb( $colors[$_GET['color']] );
	}

	if( isset($_GET['bright']) )
	{
		$yee->set_bright( (int)$_GET['bright'] );
	}
}


$yee->commit(); // changes are not sent to the bulb before commit() is called
$yee->disconnect();