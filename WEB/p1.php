<html>
<body>
	<h1 align="center">PHP Examples</h1>
		<h4>1. Writing a text using echo</h4>
<?php
	echo "Hello! to everyone this is echo demonstration";
?>
		<h4>2. Printing variable values</h4>
<?php
	$number = 30;
    echo "The value of number is $number";
?>
		<h4>3. Use of php function </h4>
<?php
	function Age($age)
    {
    	echo "The age of a person is $age";
    }
    Age(20);
?>
		<h4>4. String matching using preg_match function</h4>
<?php
	$string = "I live in Vasant Kunj, New Delhi";
    $match = preg_match("/live/",$string);
    if($match)
    {
    	echo "Match Found: live word is present in the string";
    }
    else
    {
    	echo "Match not Found";
    }
?>
		<h4>5. Use of preg_match_all function</h4>
<?php
	$str = "The rain in SPAIN falls mainly on the plains.";
	$pattern = "/ain/i";
	if(preg_match_all($pattern, $str, $matches)) 
    {
  		print_r($matches);
	}
?>
</body>
</html>