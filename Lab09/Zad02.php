<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<title>Zad2</title>
	<link href="style.css" rel="stylesheet">
</head>
<body>
<h1> Chetni na impreze: </h1>
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
		<br /><br />
    	<div class= "style2">
    		<h3>Nowa osoba:</h3>
            <form>
            <input type="text" name="nowy">
            <?php
            	error_reporting(0);
                if($_REQUEST['ile']!=NULL) {
                	for($i=0;$i<=$_REQUEST['ile'];$i++) {
                		if($i< $_REQUEST['ile'] ) {
                        	$a=$_REQUEST['imie'.$i];
                            echo '<input type="hidden" name="imie'.$i.'" value="'.$a.'" />'."\n";
                        }else {
                            echo '<input type="hidden" name="imie'.$i.'" value="'.$_REQUEST['nowy'].'" />'."\n";
                        }
                    	}
                                                                         }
            ?>
          </div>
          <input type ="hidden" name="ile" value="<?php if($_REQUEST['ile']==NULL){ echo "0";}
          if($_REQUEST['ile']!=NULL){ $a= $_REQUEST['ile']; echo $a+1;}?>">
          </form>
          <div class = "style3">
          	<?php
            	error_reporting(0);
                if ($_REQUEST['ile'] != NULL) {
                	for ($i = 0; $i <= $_REQUEST['ile']; $i++) {
                    	if($i< $_REQUEST['ile'] ) {
                        	$a= $_REQUEST['imie'.$i] ;
                            echo $i+1 .". ".$a."<br>";
                        }else {
                            echo $i+1 .". ".$_REQUEST['nowy']."<br>" ;
                        }
                        }
                     }
             ?>
        	</div>
        </div>
    </div>
</body>
</html>
