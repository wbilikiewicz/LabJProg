<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<title>Zad1</title>
	<link href="style.css" rel="stylesheet">
</head>
<body>
<h1> Kalkulator </h1>
<div id="style">
	<div class = "style1">
	<form method="POST" action="">
		<input type="text" name="liczba1" size="10" value="0">
    	<select name="znak">
        	<option>+</option>
            <option>-</option>
            <option>*</option>
            <option>/</option>
		</select>
        <input type="text" name="liczba2" size="10" value="0">
        <input type="submit" value="Oblicz">
	</form>
	<?php
		$liczba1 = $_POST['liczba1'];
        $liczba2 = $_POST['liczba2'];
    	$znak = $_POST['znak'];
        $wynik = "";
        switch ($znak) {
        	case "+":
            $wynik = $liczba1+$liczba2;
            break;
            case "-":
            $wynik = $liczba1-$liczba2;
            break;
	        case "*":
            $wynik = $liczba1*$liczba2;
            break;
            case "/":
            $wynik = $liczba1/$liczba2;
            break;
         }
         echo '<br/>'.'Wynik: '.$result;
	?>
</div>
</div>
</body>
</html>
