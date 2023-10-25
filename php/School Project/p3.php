<?php include ("header.php")?>
<div class="main">
<div style="padding:10px 10px 10px 10px;">
<h1>largest number find out.</h1>
<?php
$a=6002460;
$b=34560;
$c=1000;
$d=456760;
if($a>$b and $a>$c and $a>$d) {
	echo("the largest number is $a <br>");}
elseif($b>$a and $b>$c and $b>$d)
{echo("the largest number is $b <br>");}
elseif($c>$a and $c>$b and $c>$d)
{echo("the largest number is $c <br>");}
elseif($d>$a and $d>$c and $d>$b)
{echo("the largest number is $d <br>");}
if ($b==1000){
echo("the value if B =$b");}
else{
echo("the value if B =wrong");}
?>

</div>
</div>
<?php include ("footer.php")?>
