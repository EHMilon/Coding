<?php include ("inc/header.php");?>
<?php include ("inc/sidebar.php");?>
        <div class="grid_10">
            <div class="box round first grid">
                <h2>Add New Category</h2>
               <div class="block copyblock"> 

               <?php 
               if(isset ($_POST['submit'])){
                $name = $_POST ['name'];
                $rule = $_POST ['rule'];
                $department = $_POST ['department'];
                $contact = $_POST ['contact'];
                $address = $_POST ['address'];
                $roll = $_POST ['roll'];
            


                $query = "INSERT INTO  tbl_student(student_name, student_rule, student_department, student-contact , student_address ,student_roll ) VALUES('$name', ' $rule',  ' $department', ' $contact', ' $address', '$roll')";

                $query_run = mysqli_query($conn,$query );

                if($query_run){
                    echo("<b style='color:green;'> successfully data inserted </b> ");
                }else{
                    echo("<b style='color:red;'> successfull data not inserted </b>");
                }
               }
               ?> 


                 <form action="studentadd.php" method="POST">
                    <table class="form">					
                        <tr>
                            <td>
                                <input type="text" name="name" placeholder="Enter student Name..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="rule" placeholder="Enter Student Rule..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="department" placeholder="Enter Student Deparment..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="contact" placeholder="Enter student contact ..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="text" name="address" placeholder="Enter Student Address..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                            <td>
                                <input type="number" name="roll" placeholder="Enter Student Roll..." class="medium" />
                            </td>
                        </tr>
                        <tr>
                           
						<tr> 
                            <td>
                                <input type="submit" name="submit" Value="Add Student" />
                            </td>
                        </tr>
                    </table>
                    </form>
                </div>
            </div>
        </div>

        <?php include ("inc/footer.php"); ?>