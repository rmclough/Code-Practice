<html>
<body>
	<form id = "form1" name "form1" method = "post" action = "">
		<p>
			<label for="enterNumber">Enter Number</label>
			<input type = "text" name = "enterNumber" id = "enterNumber"/>
		</p>
		<p>
			<input type = "submit" name = "Submit" id = "Submit">
		</p>
	</form>
</body>
</html>

<?php
if (isset($_POST['enterNumber']))
{
	$number = $_POST['enterNumber'];
	echo $number." cubed = ".$number * $number * $number;
}
?>