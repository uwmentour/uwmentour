<!--
  UW Mentour Project
  sign up page
  Dajia Bao
  Xuli zhou
  Jeff Ma
-->

<div class="signup-main-image"></div>
  <div class="container">
    <div class="row">
      <hr>
      <div class="col-md-8">

        <div style="color:#4b2e83;font-size:15pt;padding-top:10px;margin-bottom:20px;">
          Sign up
          <img src="images/uwlogo.png" alt="pc1" style="width:42px;height:29px;">
        </div>
        <!-- This form is for sign in -->
        <form action="signup.php" method="post" role="form">
          <div class="form-group">
            <label>I want to be a:  </label>
            <label class="radio-inline"><input type="radio" name="mentoringType" value="mentor">Mentor</label>
            <label class="radio-inline"><input type="radio" name="mentoringType" value="mentee">Mentee</label>
          </div>
          <div class="form-group">
              <label for="firstName"></label>
              <input type="text" class="form-control" name="firstName" id="firstName" placeholder=" First Name">
          </div>
          <div class="form-group">
              <label for="lastName"></label>
              <input type="text" class="form-control" name="lastName" id="lastName" placeholder=" Last Name">
          </div>
          <div class="form-group">
              <label for="email"></label>
              <input type="email" class="form-control" name="email" id="email" placeholder="UW email" required>
          </div>
          <div class="form-group">
              <label for="pw1"></label>
              <input type="password" class="form-control" name="password" id="pw1" placeholder="Password">
          </div>
          <div class="form-group" id="pwMatch">
              <label for="pw2"></label>
              <input type="password" class="form-control" name="confirmPassword" id="pw2" placeholder="Confirm password">
              <p class="text-danger" id="warningMessage"></p>
          </div>
          <script>
            $(document).ready(function() {
              $("#pw2").keyup(function() {
                var pw1 = document.getElementById('pw1');
                var pw2 = document.getElementById('pw2');
                var warning = document.getElementById('warningMessage');
                if(pw1.value == pw2.value){
                  $("#pwMatch").removeClass("has-error has-feedback").addClass("has-success has-feedback");
                  $("span").remove();
                  $("#pwMatch").append("<span class='glyphicon glyphicon-ok form-control-feedback' aria-hidden='true'></span>");
                  $("#pwMatch").append("<span id='inputSuccess2Status' class='sr-only'>(success)</span>");
                  warning.innerHTML = "";
                } else {
                  $("#pwMatch").removeClass("has-success has-feedback").addClass("has-error has-feedback");
                  $("span").remove();
                  $("#pwMatch").append("<span class='glyphicon glyphicon-remove form-control-feedback' aria-hidden='true'></span>");
                  $("#pwMatch").append("<span id='inputError2Status' class='sr-only'>(error)</span>");
                  warning.innerHTML = "Passwords do not match, please try again!";
                }
              });
            });
          </script>
          <button type="submit" class="btn btn-info" style="margin-bottom:10px;"> Sign up </button>
          </form>

          <?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    
    // Connect to the database
    include_once("mysqlconnect.php");
    
    // Store all error messages in the $error array
    $errors = array();
    
    // Check metoring type 
    if (!isset($_POST['mentoringType'])) {
        $errors[] = '- Please select a mentoring type you want to be!';
    } else {
        $mentoringType = mysqli_real_escape_string($connection, $_POST['mentoringType']);
    }
    
    // Check first name 
    if (empty($_POST['firstName'])) {
        $errors[] = '- Please enter your first name!';
    } else {
        $firstName = mysqli_real_escape_string($connection, $_POST['firstName']);
    }
    
    // Check last name 
    if (empty($_POST['lastName'])) {
        $errors[] = '- Please enter your last name!';
    } else {
        $lastName = mysqli_real_escape_string($connection, $_POST['lastName']);
    }
    
    // Check email 
    if (empty($_POST['email'])) {
        $errors[] = '- Please enter a valid email address!';
    } else {
        $email = mysqli_real_escape_string($connection, $_POST['email']);
    }
    
    // Check password 
    if (empty($_POST['password'])) {
        $errors[] = 'Password does not match with the confirmed password!';
    } else if (($_POST['password']) != ($_POST['confirmPassword'])) {
        $errors[] = '- Password does not match with the confirmed password!';
    } else {
        $password = mysqli_real_escape_string($connection, $_POST['password']);
    }
    
    // Check if user email is already registered
    $checkEmail = "SELECT Email FROM Person WHERE Email = '$email'";
    $emailCheck = mysqli_query($connection, $checkEmail);
    if (mysqli_num_rows($emailCheck) >= 1) {
        $errors[] = '- Email address is already registered!';
    }
    
    // Check if there are any errors, if there are display error messages or else add user  
    if (empty($errors)) {
        
        // Run query to add user 
        $addUser = "INSERT INTO Person (FirstName, LastName, Email, Password, MentoringType, SignUp) 
                            VALUES ('$firstName', '$lastName', '$email', '$password', '$mentoringType', NOW())";
        
        // Store result of query
        $result = mysqli_query($connection, $addUser);
        
        if ($result) {
            
            // Send the confirmation email:
            $link    = "http://uwmentour.x10host.com/activate.php?email=$email";
            $subject = 'Your confirmation email for Mentour';
            $body    = "$firstName, welcome to Mentour. Please click on the link below to complete the sign up process and verify your email. If the link does not work then copy and paste the link into your browser address bar." . "\n \n" . $link;
            $from    = 'From: uwmentour@gmail.com';
            mail($email, $subject, $body, $from);
            
            // Generate the modal window confirmation message directing user to complete activation through their email 
            echo '<div class="modal fade" id="submitModal" role="dialog">
                    <div class="modal-dialog">
                      <!-- Modal content-->
                      <div class="modal-content">
                        <div class="modal-header">
                          <button type="button" class="close" data-dismiss="modal">&times;</button>
                          <h4 class="modal-title">Thank you for signing up</h4>
                        </div>
                        <div class="modal-body">
                          <p>Sign up complete. A confirmation link has been sent to your email address. Please check your email and click on the confirmation link to verify your email address.</p>
                        </div>
                        <div class="modal-footer">
                          <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
                        </div>
                      </div>
                    </div>
                  </div>
                  <script>
                    $(document).ready(function(){
                      $("#submitModal").modal();
                    });
                  </script>';
            mysqli_close($connection);
        } else {
            // Display query error message
            echo '<p>Could not add the entry because:<br />' . mysqli_error($connection) . '.</p><p>The query being run was: ' . $addUser . '</p>';
            mysqli_close($connection);
        }
    } else {
        // Display error messages
        echo '<p style="color:#ff0000;font-size:15pt;padding-top:10px;"> ';
        foreach ($errors as $msg) {
            echo "$msg<br />\n";
        }
        echo "</p>";
    }
}
?>

      <div style="color:#4b2e83;font-size:15pt;padding-top:10px;">
        Mentour is for UW students, alumni, faculty and staff only.
        You can sign up only if you have a valid UW email address.
      </div>
      </div> <!--close for left column-->
      <!-- right column -->
      <div class="col-md-4" style="margin-bottom:20px;">
        <div style="color:#4b2e83;font-size:15pt;">
          Problems signing up?
          Please send a detailed mesage describing the problem.
        </div>
        <hr style="margin-bottom:10px;margin-top:10px;"/>
        <form action="/" method="post">
          <div class="form-group">
              <label>UW Email:</label>
              <input type="text" class="form-control" name="email"/>
          </div>
          <div class="form-group">
            <textarea class="form-control" rows="18" id="comment"></textarea>
          </div>
        </form>
        <button type="button" class="btn btn-info" data-toggle="modal" data-target="#problemModal">Send </button>
      </div> <!--close for right-->

    </div> <!--close for row-->
  </div> <!--close for container-->

    <!-- Modal for problem message box button -->
<div id="problemModal" class="modal fade" role="dialog">
  <div class="modal-dialog">
    <!-- Modal content-->
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal">&times;</button>
        <h4 class="modal-title">Message sent</h4>
      </div>
      <div class="modal-body">
        <p>Your message was sent. We will be contacting you shortly. Please allow us one day to resolve your issue.</p>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
      </div>
    </div>
  </div>
</div>

<!-- clear message box after confirmation message -->
<script>
$(document).ready(function(){
  $(".btn-default").click(function(){
      $('textarea').val('');
  });
});
</script>


