<!DOCTYPE html>
<html>
<head>
    <title>Verificador de Idade</title>
</head>
<body>
    <h1>Verificador de Idade</h1>
    <form method="post" action="">
        <label for="idade">Informe sua idade:</label>
        <input type="text" id="idade" name="idade">
        <input type="submit" value="Verificar">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $idade = isset($_POST["idade"]) ? intval($_POST["idade"]) : 0;

        if ($idade < 18) {
            echo "Você é menor de idade.";
        } elseif ($idade >= 18 && $idade < 60) {
            echo "Você é maior de idade.";
        } else {
            echo "Você é idoso.";
        }
    }
    ?>
</body>
</html>
