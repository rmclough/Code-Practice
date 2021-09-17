<html>
<body>
	<form id = "CalculateMark" name = "CalculateMark" method = "post" action = "">
	<p>
		<label for "Mark">Enter Grade</label>
		<input type = "text" name = "Mark" id = "Mark"/>
	</p>
	<p>
		<input type = "submit" name = "Label" id = "Label"/>
	</p>
	</form>
</body>
</html>

<?php
if (isset($_POST['Mark']))
{
	$Grade = $_POST['Mark'];
	if ($Grade >= 40)
	{
		echo "Pass";
	}
	else
		echo "Fail";
}
?>