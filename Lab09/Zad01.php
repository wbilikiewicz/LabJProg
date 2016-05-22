<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<title>Zad1</title>
	<link href="style.css" rel="stylesheet">
</head>
<body>
<h1> Kalkulator </h1>
<div id="container">
	<ul id="menu">
		<li><a>Labolatroium 9</a>
			<ul>
      <li><a href="Zad01.php">Zadanie 1</a></li>
      <li><a href="Zad02.php">Zadanie 2</a></li>
      <li><a href="Zad03.php">Zadanie 3</a></li>
			</ul>
		</li>
		<li><a>Labolatroium 10</a>
			<ul>
			<li><a href="Zad04.php">Zadanie 1</a></li>
			<li><a href="Zad05.php">Zadanie 2</a></li>
			<li><a href="Zad06.php">Zadanie 3</a></li>
			</ul>
		</li>
		<li><a>Labolatroium 11</a>
			<ul>
			<li><a href="Zad07.php">Zadanie 1</a></li>
			<li><a href="Zad08.php">Zadanie 2</a></li>
			<li><a href="Zad09.php">Zadanie 3</a></li>
			</ul>
		</li>
		<li><a>Labolatroium 12</a>
			<ul>
			<li><a href="Zad010.php">Zadanie 1</a></li>
			<li><a href="Zad011.php">Zadanie 2</a></li>
			</ul>
		</li>
  </ul>
</div>
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
         echo '<br/>'.'Wynik: '.$wynik;
	?>
</div>
</div>
</body>
</html>
