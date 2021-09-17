<?php
$counter = 10;
$twelveCount = 0;
for ($x = 1;$x <=100; $x++)
{
	$counter--;
	$number = rand(0, 19);
	echo $number."\n";
	if ($number == 12){$twelveCount++;}
	if($counter == 0)
	{
		echo "<br>";
		$counter = 10;
	}
}
echo "<br>";
echo "12 Occurs ".$twelveCount." times";
	
?>