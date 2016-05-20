<?php
	if ($_SERVER['REQUEST_METHOD'] == 'GET') {
		$email = $_GET['email'];
		include("mysqlconnect.php");
		$updateActivation = "UPDATE Person SET Activated = 1 WHERE Email = '$email'";
		$result = mysqli_query($connection, $updateActivation);
        echo "Activation successful!";
        header('Refresh: 3; URL=login.php');
	}
?>