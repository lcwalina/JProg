<html>
<head>
</head>
<body>
        <b>Licznik klikniec: </b>
                <?php session_start();
                $file = @fopen("klikniecia.txt","c+");
                fscanf($file,"%d",$count);
                $count++;
                rewind($file);
                fprintf($file,"%d",$count);
                fclose($file);
                echo $count;
                ?>

</body>

</html>
