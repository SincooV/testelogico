<?php
    $charcoma="a";
    $text = readline("digite sua palavra:" );
    $text = strtolower($text);
    $np = 0;
    for ($i="0"; $i< strlen($text); $i++)
    {
        if(substr($text,$i,1)==$charcoma)
        {
             $np = $np +1;
        }
      
       
    }
    if ($np >0 ){
        echo $np." quantidades da letra a";
    }
    else {
        echo "voce nao possui nenhuma letra a nesta frase";
    }
    
?>



