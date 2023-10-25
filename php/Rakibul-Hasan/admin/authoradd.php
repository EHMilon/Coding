<?php include ("inc/header.php");?>
<?php include ("inc/sidebar.php");?>
        <div class="grid_10">
            <div class="box round first grid">
                <h2>Add New Author</h2>
               <div class="block copyblock"> 

               <?php 
               if(isset ($_POST['submit'])){
                $name = $_POST ['name'];
                $email = $_POST ['email'];
                $contact = $_POST ['contact'];
                $address = $_POST ['address'];


                $query = "INSERT INTO tbl_author(author_name, author_email, author_contact, author_address) VALUES('$name', '$email',  '$contact', '$address')";

                $query_run = mysqli_query($conn,$query );

                if($query_run){
                    echo("<b style='color:green;'> successfully data inserted </b> ");
                }else{
                    echo("<b style='color:red;'> successfull data not inserted </b>");
                }
               }
               ?>


                 <form action="authoradd.php" method="POST">
                    <table class="form">					
                        <tr>
                            <td>
                                <input type="text" name="name" placeholder="Enter Author Name..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="email" name="email" placeholder="Enter Author Email..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="number" name="contact" placeholder="Enter Author Contact..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="address" placeholder="Enter Author Address..." class="medium" />
                            </td>
                        </tr>
						<tr> 
                            <td>
                                <input type="submit" name="submit" Value="Add Author" />
                            </td>
                        </tr>
                    </table>
                    </form>
                </div>
            </div>
        </div>

        <?php include ("inc/footer.php");?>
       