<html>
<body>
	<form name = "Form1" id = "Form1" method = "post" action = "">
		<p>
			<label for "Number">Enter Number</label>
			<input type = "text" name = "Number" id = "Number"/>
		</p>
		<p>
			<input type = "submit" name = "Submit" id = "Submit">
		</p>
	</form>
</body>
</html>

<?php
if(isset($_POST['Number']))
{
	$number = $_POST['Number'];
	for($x = 0; $x <= $number; $x++)
	{
		echo $x."\n";
	}
}
?>