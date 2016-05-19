<!doctype html>
<html>
<head>
  <title>Kalkulator</title>
  <meta charset="utf-8"/>
</head>
<body>
    WYNIK:
    <?php
    $arg1=$_POST['x'];
    $arg2=$_POST['y'];
    $znak=$_POST['op'];

    if(isset($arg1) AND isset($arg2) AND isset($znak)){
    if($znak == "+") $wynik = $arg1+$arg2;
    elseif($znak == "-") $wynik = $arg1-$arg2;
    elseif($znak == "*") $wynik = $arg1*$arg2;
    elseif($znak == "/") $wynik = $arg1/$arg2;
    echo "<b>$arg1</b> $znak <b>$arg2</b> = <b>$wynik</b>";}
    else echo "<h2>Niepełne dane wejściowe!</h2>";
    ?>
  <br ><a href="zad1.php">Kalkulator</a>
</body>
</html>
