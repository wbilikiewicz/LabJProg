<!doctype html>
<html lang="pl">
<head>
	<meta http-equiv="Content-Type" content="text/html;charset=utf-8" />
    <title>Wioletta Dziurdzia</title>
    <link href="style.css" rel="stylesheet">
</head>
<body>
<h1> Licznik klikniec </h1>
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
    <form action="test.php">
    <input type="hidden" name="ilosc" value="
    <?php
    $ile=$_REQUEST[’ilosc’];
    if (isset($ile)) $ile++; else $ile=0;
    ?>
    <?php print($ile) ?>">
    <input type="submit" value="KLIKNIJ!">
    </form>
  </div>
</div>    
</body>
</html>
