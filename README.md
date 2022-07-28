# Jogo-da-Senha

No jogo da Senha, o computador sorteia, aleatoriamente, um conjunto de 4 dígitos (no intervalo de  [0,9]) que formam a senha a ser descoberta pelo jogador. Para isso, o jogador terá até 10 tentativas.  Em cada tentativa, o jogador digitará, separadamente, os 4 dígitos que ele acha que compõem a senha,  na ordem em que aparecem na senha.
O programa, então, apresentará 2 linhas com as seguintes  informações:  

• a tentativa do jogador;  
• e o resultado da tentativa, segundo a legenda abaixo:  

-1: para cada valor que não fizer parte da senha;  
0: para cada valor correto e na posição errada;  
1: para cada valor correto e na posição correta. 

Todos os 4 valores lidos em cada tentativa devem estar dentro do intervalo válido. Caso isso não ocorra, o programa deverá solicitar ao jogador que digite um novo valor. Quando o jogador adivinhar a senha,  o programa deverá informá-lo sobre tal fato, mostrando quantas tentativas foram necessárias para  descobrir a senha e encerrar sua execução. Se ao final das 10 tentativas, o jogador não adivinhar a  senha, uma mensagem de erro e a senha deverão ser exibidas.
