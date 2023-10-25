<?php
$servername = "localhost";
$username = "root";
$password = "";

$db = "web_decolopment";
$conn = mysqli_connect($servername,$username,$password,$db);

if(! $conn){
    echo("database not connected");
}
?>