<?php include("header.php"); ?>

<div class="main" style="height:auto;"> 


<h1>Find the largest number of three digit number</h1>

a=47 <br/>
b=65 <br/> 
c=84  <br/>

<?php 
$a=47; 
$b=65; 
$c=84;

if($a>$b and $a>$c){
   echo("The largest number is $a <br/>");
 }elseif($b>$a and $b>$c){
        echo("The largest number is $b <br/>");
} else{
        echo("The largest number is $c<br/>");
 }
?>


<h2>Find the smallest number of three digit number</h2>


a=574 <br/>
b=7656 <br/> 
c=236<br/>


<?php 
$a=574; 
$b=7656;
$c=236;


if($a<$b and $a<$c){
   echo("The smallest number is $a <br/>");
 }elseif($b<$a and $b<$c ){
        echo("The smallest number is $b <br/>");
} else{
        echo("The smallest number is $c<br/>");
 }
?>


<audio src=""></audio>







</div>

<?php include("fotter.php"); ?>