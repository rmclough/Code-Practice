<html>
<body>
	<form name "MonthForm" id = "MonthForm" method = "post" action = "">
	<p>
		<label for "MonthNo">Enter Month Number</label>
		<input type = "text" name = "MonthNo" id = "MonthNo"/>
	</p>
	<p>
		<input type = "submit" name = "Submit" id = "Submit"/>
	</p>
	</form>
</body>
</html>

<?php
if (isset($_POST['MonthNo']))
{
	$MonthNo = $_POST['MonthNo'];
	if ($MonthNo >= 1 && $MonthNo <= 12)	
	{
		echo "Valid";
	}
	else
		echo "Invalid";
}

?>