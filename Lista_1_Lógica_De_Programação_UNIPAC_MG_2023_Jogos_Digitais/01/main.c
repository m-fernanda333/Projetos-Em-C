/* ENUNCIADO

Dadas as declarações
float soma,x ;
int num , n;
char nome, cor, dia;

assinale os comandos de atribuição inválidos:
( ) cor = “preto”;
( ) num = “123”;
( ) soma = num + 2 * x;
( ) x = x + 1;
( ) dia = “Segunda”;
( ) n = soma;
( ) dia = “s”;
( ) n = soma;
( ) cor = ‘p’;


*/

(x) cor = “preto”; //o tipo de dado está correto, porém não indicou qual a posição do char e nem o tamanho na declaração, então a informação será corrompida
( x) num = “123”; //errado pois não é necessario usar as aspas duplas na atribuição de int
( ) soma = num + 2 * x; //certo porém é bom ter atenção
( ) x = x + 1; //certo
(x ) dia = “Segunda”; //mesmo caso da 1º
(x) n = soma; //errado atribuição direta entre tipos
(x ) dia = “s”; //errado pois tem aspas duplas em 1 caracter apenas
( ) n = soma; //errado atribuição direta entre tipos
( ) cor = ‘p’; //certo
