<?php include("header.php"); ?>

<div class="main" style="height:auto;"> 



<p>

<h1> Circle Area </h1>

radius=50 <br>
Constant pi=3.1416 <br>


Area= <?php  $radius=50;  $area=.5*$radius*$radius; echo($area)?>

<p>
<p/>

<h1>Traingle area </h1>

<P>

length=50 <br>
width=40 <br>

Area= <?php  $length=50; $width=40; $area=$length*$width; echo($area) ?>
    
<P/>


<p>
    
<h1>Average</h1>

b=15<br>
c=10<br>
d=5<br>
e=155<br>



average=<?php $b=15; $c=10; $d=5; $e=155; $avg=($b+$c+$d+$e)/4;echo($avg);?>

<p/>

</div>


<?php include("fotter.php"); ?>

    
