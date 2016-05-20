<?php 
    //  Logout  and clear session
    session_start();
    session_unset();
    session_destroy();
    header('Location: home.php');
    exit();
?>
