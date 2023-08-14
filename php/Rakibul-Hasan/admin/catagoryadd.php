<?php include ("inc/header.php");?>
<?php include ("inc/sidebar.php");?>
        <div class="grid_10">
            <div class="box round first grid">
                <h2>Add New Category</h2>
               <div class="block copyblock"> 

               <?php 
               if(isset ($_POST['submit'])){

                $catagory = $_POST ['catagory_name'];


                $query = "INSERT INTO 	tbl_catagory(catagoty_name) VALUES('$catagory')	";

                $query_run = mysqli_query($conn,$query );
                if($query_run){
                    echo("successfull data inserted");
                }else{
                    echo("successfull data not inserted");
                }
               }
               ?>


                 <form action="catagoryadd.php" method="POST">
                    <table class="form">					
                        <tr>
                            <td>
                                <input type="text" name="catagory_name" placeholder="Enter Category Name..." class="medium" />
                            </td>
                        </tr>
						<tr> 
                            <td>
                                <input type="submit" name="submit" Value="Add Catagory" />
                            </td>
                        </tr>
                    </table>
                    </form>
                </div>
            </div>
        </div>

        <?php include ("inc/footer.php");?>
       
