<?php include("header.php"); ?>

<div class="main" style="height:auto;"> 

 <form action="p5.php" mehtod="POST">

     <div class="form" ">

     <div>
     <label for="">Student Name:</label> 
     <input type="text" placeholder="Enter your name" required > <br>

     </div>
     
      
      <label for="roll">Student Roll:</label>
     <input type="number" placeholder="Enter your roll" required > <br>
      <label for="">Student Address:</label>
     <input type="text" placeholder="Enter your address" required > <br>
      <label for="">Student Department:</label>
     <input type="text" placeholder="Enter your depm" required > <br>
      <label for="">Student Email:</label>
     <input type="email" placeholder="Enter your Email" required > <br>
      <label for="">Student password:</label>
      <input  type="password" placeholder="Enter your password" required > <br>
      <br>
      <br>
      <input type="submit" value="submit">
     
     
     </div>
</form> 




</div>
     
<?php include("fotter.php"); ?>
