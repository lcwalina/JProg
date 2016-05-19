<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8"/>
  <style>
    #main
    {
      width:1000px;
      margin-left: auto;
      margin-right: auto;
    }
    #input1
    {
      margin-top: 30px;
      width:160px;
      float:left;
    }
    #op1
    {
      width:50px;
      float:left;
    }
    #input2
    {
      margin-top: 30px;
      width:160px;
      float:left;
    }
    #equals
    {
      margin-top: 30px;
      float:left;
    }
  </style>
</head>
<body>
  <form action="calc.php" method="post">
    <div id="main">
      <div id="input1">
        <input type="txt" name="x" size="10" />
      </div>
      <div id="op1">
        <input type="radio" name="op" value="+" /> + <br />
        <input type="radio" name="op" value="-" /> - <br />
        <input type="radio" name="op" value="*" /> * <br />
        <input type="radio" name="op" value="/" /> / <br />
      </div>
      <div id="input2">
        <input type="txt" name="y" size="10" />
      </div>
      <div id="equals">
        <input type="submit" value="=" />
      </div>
    </div>
  </form>
</body>

</html>
