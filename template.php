<?php
    // Start the session
    session_start();
    // Check for session timeout
    if (isset($_SESSION['Timeout'])) {  
        if ($_SESSION['Timeout'] + 3600 < time()) {
            session_unset();
            session_destroy();
        }
    }
    else {
        // Initialize session timeout
        $_SESSION['Timeout'] = time();
    }
    // Get the basename of the page
    $page_base = basename($_SERVER['PHP_SELF'], ".php");
?>
<!DOCTYPE html>
<html lang="en">
    <head>
        <title>Mentour</title>
        <meta charset="utf-8">
        <meta name="viewport" content="width=device-width, initial-scale=1">
        <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/css/bootstrap.min.css">
        <script src="https://ajax.googleapis.com/ajax/libs/jquery/1.12.2/jquery.min.js"></script>
        <script src="http://maxcdn.bootstrapcdn.com/bootstrap/3.3.6/js/bootstrap.min.js"></script>
        <link href="css/template.css" rel="stylesheet" type="text/css">
    </head>
    <body>
        <!-- Nav Bar -->
        <nav class="navbar navbar-inverse navbar-fixed-top">
            <div class="container-fluid">
                <div class="navbar-header">
                    <a class="navbar-brand" href="home.php">Mentour</a>
                    <button type="button" class="navbar-toggle" data-toggle="collapse" data-target="#myNavbar">
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span>
                        <span class="icon-bar"></span> 
                    </button>
                </div>
                <div class="collapse navbar-collapse" id="myNavbar">
                    <ul class="nav navbar-nav navbar-right">
                        <?php
                            if (isset($_SESSION['LoggedIn'])) {
                                // echo "<li>Welcome {$_SESSION['FirstName']} </li>";
                                echo "<li><a href='messages.php'>Messages</a></li>";
                                echo "<li><a href='myprofile.php'>My profile</a></li>";
                                echo "<li><a href='logout.php'>Logout</a></li>";
                            } else {
                                if ($page_base != "signup") {
                                    echo "<li><a href='signup.php'>Sign up</a></li>";
                                }
                                if ($page_base != "login") {
                                    echo "<li><a href='login.php'>Login</a></li>";
                                } 
                            }
                        ?>
                    </ul>
                </div>
            </div>
        </nav>
        <div>
            <!-- Load the webpage -->
            <?php include($page_base . '.inc'); ?>
        </div> 
        <div class="uw-footer" role="contentinfo">
            <h3><a href="http://www.washington.edu">University of Washington</a></h3> 
            <h3><a href="http://www.washington.edu/boundless/">Be boundless</a></h3>
            <h4>Connect with us:</h4>
            <nav aria-label="footer links" role="navigation">
                <ul class="footer-links">
                    <li><a href="http://www.facebook.com/UofWA"><img src="images/facebookicon.png"/></a></li>
                    <li><a class="twitter" href="http://twitter.com/UW"><img src="images/twittericon.png"/></a></li>
                    <li><a class="instagram" href="http://instagram.com/uofwa"><img src="images/instagramicon.png"/></a></li>
                    <li><a class="youtube" href="http://www.youtube.com/user/uwhuskies"><img src="images/youtubeicon.png"/></a></li>
                    <li><a class="linkedin" href="http://www.linkedin.com/company/university-of-washington"><img src="images/linkedinicon.png"/></a></li>
                    <li><a class="pinterest" href="http://www.pinterest.com/uofwa/"><img src="images/pinteresticon.png"/></a></li>
                    <li><a class="google" href="https://plus.google.com/+universityofwashington/posts"><img src="images/googleplusicon.png"/></a></li>
                </ul>
            </nav>
            <nav aria-label="footer links" role="navigation">
                <ul class="footer-links">
                    <li><a href="http://www.uw.edu/accessibility">Accessibility</a></li>
                    <li><a href="http://uw.edu/home/siteinfo/form">Contact Us</a></li>
                    <li><a href="http://www.washington.edu/jobs">Jobs</a></li>
                    <li><a href="http://www.washington.edu/safety">Campus Safety</a></li>
                    <li><a href="http://myuw.washington.edu/">My UW</a></li>
                    <li><a href="http://www.washington.edu/admin/rules/wac/rulesindex.html">Rules Docket</a></li>
                    <li><a href="http://www.washington.edu/online/privacy/">Privacy</a></li>
                    <li><a href="http://www.washington.edu/online/terms/">Terms</a></li>
                </ul>
           </nav>
           <br/>
            <p>© 2016 University of Washington | Seattle, WA</p>
        </div>
    </body>
</html>