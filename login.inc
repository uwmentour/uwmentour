@@ -0,0 +1,65 @@
<!--
  UW Mentour Project
  log in page
  Dajia Bao
  Xuli zhou
  Jeff Ma
-->

<div class="login-main-image">
    <div class="login-wrapper fadeInUp">
        <div class="text1">Mentour</div>
        <form action="login.php" method="post" role="form">
            <div class="form-group">
                <label for="email"></label>
                <input type="email" class="form-control" name="Email" id="email" placeholder="UW email" required>
            </div>
            <div class="form-group">
                <label for="password"></label>
                <input type="password" class="form-control" name="Password" id="password" placeholder="Password">
            </div>
            <button type="submit" class="btn btn-info" style="margin:20px 0px 20px 0px;">Login</button>
        </form>
        <div style="color:#971515; font-size:16pt;">
    <?php
        if ($_SERVER['REQUEST_METHOD'] == 'POST') {
            // Connect to the database
            include("mysqlconnect.php");
            
            // Store all error messages in the $error array
            $errors = array();
            
            // Login and password set to password
            $email    = $_POST['Email'];
            $password = $_POST['Password'];
            
            // Check login values against database
            $query = "SELECT * FROM Person WHERE Email = '$email' AND Password = '$password'";
            
            // Store results of query
            $result = mysqli_query($connection, $query);
            $person = mysqli_fetch_array($result);
            
            // Check if login matched 1 record
            if (mysqli_num_rows($result) == 1) {
                
                // Create session variables:
                $_SESSION['FirstName'] = $person['FirstName'];
                $_SESSION['PersonID']  = $person['PersonID'];
                $_SESSION['MentoringType'] = $person['MentoringType'];
                $_SESSION['LoggedIn']  = 1;
            }
            
            // Check if session is set and redirect to home page
            if ($_SESSION['LoggedIn'] == 1) {
                header('Location: home.php');
                exit();
            } else {
                echo "<br/><p>Invalid email or password!</p>";
            }
            mysqli_close($connection);
        }
    ?>
    </div>
    </div>
</div>