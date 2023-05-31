/* ENUNCIADO

12. Fa�a um algoritmo para calcular as ra�zes de uma equa��o do segundo grau.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>
#include <math.h>

int main() {

    float a,b,c, delta, r1, r2;

    setlocale(LC_ALL, "Portuguese");

    printf("\n-----------------------------------------------------------------------------\n");
    printf("\n\n --> ALGORITMO RA�ZES DE UMA EQUA��O COMPLETA DE 2� GRAU <--\n\n");
    printf("\n..............................\n");
    printf("\nUma equa��o de 2� grau possui o formato: ax^2 + bx + c = 0. \nOnde 'a', 'b' e 'c' s�o vari�veis conhecidas e deseja-se encontrar o valor de X. Sendo assim, informe: ");

    printf("\n\n O valor de a: ");
    scanf("%f", &a);
    printf(" O valor de b: ");
    scanf("%f", &b);
    printf(" O valor de c: ");
    scanf("%f", &c);

    //calcular o delta //delta = b^2 - 4ac

    delta = pow(b,2) - (4*a)*c;

    /*
       Se delta > 0, a equa��o possui duas ra�zes reais e distintas.
       Se delta = 0, a equa��o possui duas ra�zes reais e iguais.
       Se delta < 0, a equa��o possui duas ra�zes complexas e conjugadas.
    */

    if (delta >= 0){
        r1 = (-b + sqrt(delta)) / (2*a);
        r2 = (-b - sqrt(delta)) / (2*a);
    }
    else {
        printf("\n\nERRO: N�O POSSU� RA�ZES REAIS!!!\n\n");
    }

    printf("\n..............................\n");
    printf("\n RESULTADO: \n");
    printf("\n\n Delta: %f", delta);
    printf("\n Raiz 1: %f", r1);
    printf("\n Raiz 2: %f\n", r2);

    printf("\n-----------------------------------------------------------------------------\n");

    return 0;
}
