/* ENUNCIADO

Dadas as declara��es
float soma,x ;
int num , n;
char nome, cor, dia;

assinale os comandos de atribui��o inv�lidos:
( ) cor = �preto�;
( ) num = �123�;
( ) soma = num + 2 * x;
( ) x = x + 1;
( ) dia = �Segunda�;
( ) n = soma;
( ) dia = �s�;
( ) n = soma;
( ) cor = �p�;


*/

(x) cor = �preto�; //o tipo de dado est� correto, por�m n�o indicou qual a posi��o do char e nem o tamanho na declara��o, ent�o a informa��o ser� corrompida
( x) num = �123�; //errado pois n�o � necessario usar as aspas duplas na atribui��o de int
( ) soma = num + 2 * x; //certo por�m � bom ter aten��o
( ) x = x + 1; //certo
(x ) dia = �Segunda�; //mesmo caso da 1�
(x) n = soma; //errado atribui��o direta entre tipos
(x ) dia = �s�; //errado pois tem aspas duplas em 1 caracter apenas
( ) n = soma; //errado atribui��o direta entre tipos
( ) cor = �p�; //certo
