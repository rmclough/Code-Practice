<html>
<body>
	<form id = "GrossPay" name = "GrossPay" method = "post" action = "">
	<p>
		<label for "HourlyRate">Enter Hourly Rate</label>
		<input type = "text" name = "HourlyRate" id = "HourlyRate"/>
	</p>
	<p>
		<label for "HoursWorked">Enter Hours Worked</label>
		<input type = "text" name = "HoursWorked" id = "HoursWorked"/>
	</p>
	<p>
		<input type = "submit" name = "Submit" id = "Submit"/>
	</p>
</body>
</html>

<?php
if ((isset($_POST['HourlyRate'])) && (isset($_POST['HoursWorked'])))
{
	$hourlyRate = $_POST['HourlyRate'];
	$hoursWorked = $_POST['HoursWorked'];
	echo "Gross Pay = ".$hourlyRate*$hoursWorked;
}
?>