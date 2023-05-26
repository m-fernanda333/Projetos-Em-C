/* ENUNCIADO

Fa�a um algoritmo leia dois valores inteiros para as vari�veis A e B e em seguida troque os
valores das vari�veis, ou seja, A receba o valor de B e B receba o valor de A

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    //declarando valores inteiros
    int a = 0, b = 0, temp;

    //lendo dois valores inteiros
    printf("\nInforme o valor inteiro A = ");
    scanf("%d", &a);
    printf("\nInforme o valor inteiro B = ");
    scanf("%d", &b);

    //trocando os valores
    temp = a; //utilizando uma var. tempor�ria para n�o perder 1 valor na troca
    a = b;
    b = temp;

    //imprimindo resultado na tela
    printf("\n ............... \n");
    printf("\n Valor inteiro A = %d", a);
    printf("\n Valor inteiro B = %d", b);
    printf("\n ............... \n");

    return 0;
}
