<?php include ("inc/header.php");?>
<?php include ("inc/sidebar.php");?>
        <div class="grid_10">
            <div class="box round first grid">
                <h2>Add New Category</h2>
               <div class="block copyblock"> 

               <?php 
               if(isset ($_POST['submit'])){
                $name = $_POST ['name'];
                $catagory = $_POST ['catagory'];
                $author = $_POST ['author'];
                $publisher= $_POST ['publisher'];
                $edition  = $_POST ['edition'];
                $Quality = $_POST ['Quality'];
                $price = $_POST ['price'];
                $Unique_Id = $_POST ['Unique_Id'];


                $query = "INSERT INTO tbl_book(book_name, book_catagory, book_author, book_publisher, book_edition , book_quality, book_price, book_unique_id ) VALUES('$name', '$catagory',  ' $author', ' $publisher',  '$edition',  '$Quality',  '$price ' , '$Unique_Id ')";

                $query_run = mysqli_query($conn,$query );

                if($query_run){
                    echo("<b style='color:green;'> successfully data inserted </b> ");
                }else{
                    echo("<b style='color:red;'> successfull data not inserted </b>");
                }
               }
               ?>


                 <form action="bookadd.php" method="POST">
                    <table class="form">					
                        <tr>
                            <td>
                                <input type="text" name="name" placeholder="Enter Book Name..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="catagory" placeholder="Enter Book catagory Name..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="author" placeholder="Enter Book Author Name..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="publisher" placeholder="Enter Book Publisher Name..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="edition" placeholder="Enter Book edition..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="Quality" placeholder="Enter Book Quality..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="number" name="price" placeholder="Enter Book Price..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="Unique_Id" placeholder="Enter Book Unique Id..." class="medium" />
                            </td>
                        </tr>
						<tr> 
                            <td>
                                <input type="submit" name="submit" Value="Add Book" />
                            </td>
                        </tr>
                    </table>
                    </form>
                </div>
            </div>
        </div>

        <?php include ("inc/footer.php");?>