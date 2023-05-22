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
void menuPrincipal (){

    double distancia, consumo, combustivel, result;
    int check, op;

    do{
        printf("\n-----------------------------------------------------------------------------\n");
        printf("\n\n --> ALGORITMO AJUDANTE DE BORDO <--\n\n");

        printf("\n..............................\n");
        printf("\nInforme a distância a ser percorrida (Km): ");
        scanf("%lf", &distancia);
        check = verificaZero(distancia);
        if(check == 0){
            printf("\nInforme o consumo atual de seu veículo (l/Km): ");
            scanf("%lf", &consumo);
            check = verificaZero(consumo);
            if(check == 0){
                printf("\nQual o valor atual do litro do seu combustível: ");
                scanf("%lf", &combustivel);
                check = verificaZero(combustivel);
                if(check == 0){ //Se todas as entradas forem válidas, calcular e gerar relatório do diário de bordo
                    result = litrosNecessarios(distancia, consumo);
                    result = valorDaViagem(result, combustivel);
                    gerarRelatorio(distancia, consumo, combustivel, result);
                    op = 0;
                }
                else {
                    printf("\n\nERRO: O VALOR INFORMADO PARA O COMBUSTÍVEL NÃO É VÁLIDO, TENTE NOVAMENTE!!!\n\n");
                    system("pause"); limparTela();
                }
            }
            else {
                printf("\n\nERRO: O VALOR INFORMADO PARA CONSUMO NÃO É VÁLIDO, TENTE NOVAMENTE!!!\n\n");
                system("pause"); limparTela();
            }
        }
        else {
            printf("\n\nERRO: O VALOR INFORMADO PARA DISTÂNCIA NÃO É VÁLIDO, TENTE NOVAMENTE!!!\n\n");
            system("pause"); limparTela();
        }

    }while (op != 0);

}

/*Função que gera um relatório de diário de bordo, informando os vlores finais*/
void gerarRelatorio(double distancia, double consumo, double combustivel, double result){

    limparTela();
    printf("\n-----------------------------------------------------------------------------\n");
    printf("\n\n --> RELATÓRIO DE BORDO <--\n\n");
    printf("\n Distância = %lf Km", distancia);
    printf("\n Consumo do veículo = %lf litros", consumo);
    printf("\n Valor atual do combustível = R$ %lf", combustivel);
    printf("\n..............................\n");
    printf("\n\nVALOR TOTAL DA VIAGEM = R$ %lf", result);
    printf("\n\n-----------------------------------------------------------------------------\n");

}

/*Função que irá verificar se o valor (double) fornecido é menor ou igual a 0, retornando 1 caso verdadeiro e 0 caso contrário*/
int verificaZero(double valor){
    if(valor <= 0){
        return 1;
    }
    return 0;
}

/*Quantidade de litros de combustivel necessários para percorrer uma determinada distancia de acordo com o consumo do veiculo*/
double litrosNecessarios(double distanciaKm, double consumoPorL){
    return distanciaKm*consumoPorL;
}

/*recebe a quantidade d elitros necessárias p/ um percurso e o valor atual do combustivel e retorna o valor final a ser gasto*/
double valorDaViagem (double litrosNecessarios, double combustivel ){
    return litrosNecessarios*combustivel;
}

//verifica se é windows ou linux e limpa o console
void limparTela() {
#ifdef _WIN32 //Verifica se é Windows
    system("cls");
#else
    system("clear");
#endif
}
