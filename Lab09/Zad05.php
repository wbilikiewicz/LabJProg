<?php
 if (isset($_REQUEST['funkcja'])) {
  $wydruk = '';
  $wydruk .= '#!/bin/bash'.PHP_EOL;
  $wydruk .= 'gnuplot << EOF'.PHP_EOL;
  $wydruk .= 'set terminal png truecolor enhanced'.PHP_EOL;
  $wydruk .= 'set output "rys.png"'.PHP_EOL;
  $wydruk .= 'splot ' . $_REQUEST['funkcja'].PHP_EOL;
  $wydruk .= 'EOF'.PHP_EOL;
  $pl = fopen("rysunek.sh", "w");
  fprintf($pl, "%s", $wydruk);
  fclose($pl);
  exec('chmod 755 rysunek.sh');
  exec('./rysunek.sh');
  exec('chmod 644 rys.png');
  print('<img src="rys.png"><br><br>'.PHP_EOL);
 }
?>

<!doctype html>
<html lang="pl">
<head>
	<meta http-equiv="Content-Type" content="text/html;charset=utf-8" />
    <title>Wioletta Dziurdzia</title>
    <link href="style.css" rel="stylesheet">
</head>
<body>
<h1> Rysowanie wykresow </h1>
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
    <form action="10-rysowanie_wykresow.php" method=post>
    Funkcja: <input type="text" name="funkcja"><br>
    <input type="submit" value="JUZ">
    </form>
  </div>
</div>
</body>
</html>
