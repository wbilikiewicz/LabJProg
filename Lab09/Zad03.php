<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<link href="style.css" rel="stylesheet">
</head>
<body>
<h1> Licznik odwiedzin </h1>
<div id="style">
<div class = "style1">
<h2>
<?php
	session_start();
    $counter_name = "counter.txt";
    if (!file_exists($counter_name)) {
    	$f = fopen($counter_name, "w");
        fwrite($f,"0");
        fclose($f);
    }
	$f = fopen($counter_name,"r");
    $counterVal = fread($f, filesize($counter_name));
    fclose($f);
	if(!isset($_SESSION['has_visited'])){
    	$_SESSION['has_visited']="yes";
        $counterVal++;
        $f = fopen($counter_name, "w");
        fwrite($f, $counterVal);
        fclose($f);
     }
    echo '<span style="font-size: 26px;"> Jestes odwiedzajacym nr $counterVal .'</span>';
?>
</h2>
</div>
</div>
</body>
</html>

