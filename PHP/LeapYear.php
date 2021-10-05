<!DOCTYPE html>
<html>
	<body>
 
	<?php  
	$year = 2024;  
 
	if((0 == $year % 4) & (0 != $year % 100) | (0 == $year % 400))
	{
		echo "$year is leap a year.";    
	}
 
	else  
	{  
		echo "$year is not a leap year.";    
	}
	?> 
 
	</body>
</html>