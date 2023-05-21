/* ENUNCIADO

Maria quer saber quantos litros de gasolina precisa colocar em seu carro e quanto vai gastar para
fazer uma viagem até a casa de sua irmã. Faça algoritmo que leia:
 A distância da casa de Maria até sua irmã;
 O consumo do carro de Maria (KM rodados / litro);
 O preço da gasolina (litro).
E mostre as informações que Maria necessita.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "cabecalho.h"

int main(){

     setlocale(LC_ALL, "Portuguese");
     menuPrincipal();

    return 0;
}

/*Função de menu principal para iniciar as ações do usuário*/
int menuPrincipal (){

    double distancia, consumo, combustivel, ln, vv;

    printf("\n-----------------------------------------------------------------------------\n");
    printf("\n\n --> ALGORITMO AJUDANTE DE BORDO <--\n\n");

    printf("\n..............................\n");
    printf("\nInforme a distância a ser percorrida (Km): ");
    scanf("%lf", &distancia);
    printf("\nInforme o consumo atual de seu veículo (l/Km): ");
    scanf("%lf", &consumo);
    printf("\nQual o valor atual do litro do seu combustível: ");
    scanf("%lf", &combustivel);

    ln = litrosNecessarios(distancia, combustivel);
    vv = valorDaViagem(ln, combustivel);
    printf("%lf", vv);
}

/*Quantidade de litros de combustivel necessários para percorrer uma determinada distancia de acordo com o consumo do veiculo*/
double litrosNecessarios(double d, double c){
    return d/c;
}

/*recebe a quantidade d elitros necessárias p/ um percurso e o valor atual do combustivel e retorna o valor final a ser gasto*/
double valorDaViagem (double ln, double vc){
    return ln*vc;
}
