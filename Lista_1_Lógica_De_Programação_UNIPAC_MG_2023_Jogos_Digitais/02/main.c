/* ENUNCIADO

Fa�a um algoritmo leia dois valores inteiros para as vari�veis A e B e em seguida troque os
valores das vari�veis, ou seja, A receba o valor de B e B receba o valor de A

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    /* OP��O COM VARI�VEL TEMPOR�RIA

    //declarando valores inteiros e var. temporaria
    int a = 0, b = 0, temp;

    //lendo dois valores inteiros
    printf("\nInforme o valor inteiro A = ");
    scanf("%d", &a);
    printf("\nInforme o valor inteiro B = ");
    scanf("%d", &b);

    //imprimindo valores antes da troca
    printf("\n ............... \n");
    printf("\n VALORES ANTES DA TROCA \n\n");
    printf("\n Valor inteiro A = %d", a);
    printf("\n Valor inteiro B = %d", b);
    printf("\n ............... \n");

    //trocando os valores
    temp = a; //utilizando uma var. tempor�ria para n�o perder 1 valor na troca
    a = b;
    b = temp;

    //imprimindo resultado na tela
    printf("\n ............... \n");
    printf("\n VALORES DEPOIS DA TROCA \n\n");
    printf("\n Valor inteiro A = %d", a);
    printf("\n Valor inteiro B = %d", b);
    printf("\n ............... \n");

    return 0;

    */

    /* OP��O SEM VARI�VEL TEMPOR�RIA*/

     //declarando valores inteiros
    int a = 0, b = 0;

    //lendo dois valores inteiros
    printf("\nInforme o valor inteiro A = ");
    scanf("%d", &a);
    printf("\nInforme o valor inteiro B = ");
    scanf("%d", &b);

    //imprimindo valores antes da troca
    printf("\n ............... \n");
    printf("\n VALORES ANTES DA TROCA: \n\n");
    printf("\n Valor inteiro A = %d", a);
    printf("\n Valor inteiro B = %d", b);
    printf("\n ............... \n\n");


    //trocando com opera��es matem�ticas
    a = a + b; // a = 5 + 3 = 8
    b = a - b; // b = 8 - 3 = 5
    a = a - b; // a = 8 - 5 = 3

    //imprimindo resultado na tela
    printf("\n ............... \n");
    printf("\n VALORES DEPOIS DA TROCA: \n\n");
    printf("\n Valor inteiro A = %d", a);
    printf("\n Valor inteiro B = %d", b);
    printf("\n ............... \n\n");

    return 0;
}
