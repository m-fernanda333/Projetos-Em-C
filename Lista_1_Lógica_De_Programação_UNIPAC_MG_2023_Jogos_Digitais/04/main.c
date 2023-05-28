/* ENUNCIADO

Faça um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano,
P(x1,y1) e P(x2,y2), escreva a distância entre eles.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//constantes
#define TAMANHOMAX 1000

double distanciaEntreDoisPontos(double xa, double ya, double xb, double yb);

int main(){

    double xa, ya, xb, yb, ab;

    setlocale (LC_ALL, "Portuguese");

    printf("\n-----------------------------------------------------------------\n");
    printf("\n\n --> ALGORITMO DISTANCIA ENTRE DOIS PONTOS <-- \n\n");
    printf("\n..............................\n");

    printf("\n Informe X(a) = ");
    scanf("%lf", &xa);
    printf("\n Informe Y(a) = ");
    scanf("%lf", &ya);
    printf("\n Informe X(b) = ");
    scanf("%lf", &xb);
    printf("\n Informe Y(b) = ");
    scanf("%lf", &yb);

    //chamando função p/ calcular
    ab = distanciaEntreDoisPontos(xa,ya,xb,yb);

    //
    printf("\n..............................\n");
    printf("\nAB = %lf \n", ab);
    printf("\n-----------------------------------------------------------------\n");

    return 0;
}

double distanciaEntreDoisPontos(double xa, double ya, double xb, double yb){
    double result = sqrt(pow((xa - xb), 2) + pow((ya - yb), 2));
    return  result;

}



