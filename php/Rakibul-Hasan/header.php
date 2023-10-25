<?php
echo "Welcome to the stage where we are ready to get connected to a database";

/* Ways to connect to a MySQL Database
1. MySQLi extension
2. PDO */
// Connecting to the Database
$servername = "localhost";
$username = "root";
$password = ""; // add your password here if you have set one

// Create a connection
$conn = mysqli_connect($servername, $username, $password);

// Check for connection errors
if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

echo "Connection was successful";
?>


<!DOCTYPE html>
<! html>
   <html lang="en">

   <head>
      <link rel="stylesheet" type="text/css" href="css/style2.css">

   </head>

   <style>
      .heading-style {
         background-color: cornflowerblue;
         width: 900px;
         height: 85px;

         text-align: center;
         color: rgb(8, 8, 33);
         padding: 5px;
         margin: auto;
         margin-top: 10px;
      }

      .navbar-style {
         background-color: gainsboro;
         width: 900px;
         height: 45px;
         font-family: arial rgb(21, 4, 4);
         text-align: center;
         color: rgb(236, 236, 241);
         padding: 5px;
         margin: auto;
      }
   </style>

   <body>


      <div class="heading-style">
         <h1 style="color:green;">Rakibul Hasan </h1>


      </div>



      <div class="navbar-style">
         <table>
            <tr>
               <th style=" border : 0px solid ;"> <a style=" color :tomato;" href="index.php"> Home </a> </th>
               <th style=" border : 0px solid ;"> <a style=" color :tomato;" href="project.php"> Project</a> </th>
               <th style=" border : 0px solid ;"> <a style=" color :tomato;" href="about.php"> About</a> </th>

            </tr>
         </table>





      </div>
