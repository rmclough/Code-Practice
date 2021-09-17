<html>
<body>
	<form id = "Form1" name = "Form1" method = "post" action = "">
	<p>
		<label for "EnterNumber">Enter Number</label>
		<input type = "text" name = "EnterNumber" id = "EnterNumber"/>
	</p>
	<p>
		<input type = "submit" name = "Submit" id = "Submit"/>
	</p>
</body>
</html>

<?php
if(isset($_POST['EnterNumber']))
{
	$number = $_POST['EnterNumber'];
	$primeCheck = 0;
	if ($number > 0)
	{
		for($x = 2; $x <= ($number/2); $x++)
		{
			if($number % $x == 0)
			{
				$primeCheck++;
				break;
			}
		}
		if ($primeCheck == 0)
		{
			echo "Prime Number";
		}
		else
			echo "Non Prime Number";
	}
	else
		echo "Must be positive";
}
?>