<!doctype html>
<html land="pl">
<head>
 <meta charset="utf-8" />
 <title>Lista na imprezę</title>
</head>
<body>
  <div style="float:left; vertical-align:top; background-color:blue">
  <h3>Chętni na imprezę:</h3>
  <?php
  session_start();
  if(isset($_SESSION['indeks']))
  for($i=1; $i<=$_SESSION['indeks']; $i++)
  {
    echo $i;
    echo '. ';
    echo $_SESSION['nick'.$i] ;
    echo '<br>';
  }
  ?>
  </div>
  <div style="float:right; vertical-align:top;background-color:orange">
  <h3>Nowa osoba:</h3>
  <form action="impreza.php">
  <input type="text" name="nowy">
  <input type="hidden"
         name="ile"
         value="<?php
         if(isset($_SESSION['indeks'])) echo $_SESSION['indeks'];
         else echo '0';?>">
  <input type="submit" value="ZAPISZ">
  </form>
  </div>
</body>
</html>
