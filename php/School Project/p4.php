<?php include ("header.php")?>
<div class="main" style="height:auto">
<div style="margin-top: 0px; padding:5px;">

<h1>loop</h1>

<?php
echo("for loop <br>");
for($x=2; $x<=10; $x=$x+2){
    echo("$x <br>");
}

echo("while loop <br>");
$x =2;
while($x<=10){
    echo("$x <br>");
    $x=$x+2;
}

echo("Do while loop  <br>");
$x=2;
do{
    echo("$x <br>");
    $x=$x+2;  
}while($x<=10);


echo("For each loop <br>");
$array = array(2,4,6,8,10);
foreach($array as $value){
    echo(" $value <br>");
}
?>

<h1>odd number</h1>

<?php

for($odd=19; $odd>=1; $odd=$odd-2){
    echo("$odd <br>");
}
?>

<h2>even neuber</h2>


<?php

for($odd=20; $odd>1; $odd=$odd-2){
    echo("$odd <br>");
}
?>

<h3>Repeat name </h3>

<?php

for($x=1; $x<=10; $x=$x+1 ){
    echo("dipu <br>");
}
?>






</div>


<?php include ("footer.php")?>
