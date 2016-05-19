<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<title>Zad2</title>
	<link href="style.css" rel="stylesheet">
</head>
<body>
<h1> Chetni na impreze: </h1>
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


