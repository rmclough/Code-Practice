<?php
$counter = 1;
for($x=1;$x<=10;$x++)
{
	for($i=1; $i<=$counter;$i++)
	{
		echo "*\n";
	}
	echo "<br>";
	$counter++;
}

echo "<br><br>";
$counter = 1;

for($x=10;$x>=1;$x--)
{
	for($i=10; $i>=$counter;$i--)
	{
		echo "*\n";
	}
	echo "<br>";
	$counter++;
}

echo "<br><br>";
$counter = 1;
$space = 3;

for($x=10;$x>=1;$x--)
{
	echo str_repeat('&nbsp;', $space);
	for($i=10; $i>=$counter;$i--)
	{
		echo "*\n";
	}
	echo "<br>";
	$counter++;
	$space+=3;
}

echo "<br><br>";
$counter = 1;
$space = 30;

for($x=1;$x<=10;$x++)
{
	echo str_repeat('&nbsp;', $space);
	for($i=1; $i<=$counter;$i++)
	{
		echo "*\n";
	}
	echo "<br>";
	$counter++;
	$space-=3;
}
?>