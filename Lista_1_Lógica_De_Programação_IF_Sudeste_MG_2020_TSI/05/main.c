/* ENUNCIADO

Fa�a um algoritmo que leia uma temperatura em graus Fahrenheit e converta / mostre em graus
cent�grados.
Cent�grados = (Fahrenheit � 32) * 5 / 9.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "cabecalho.h"


int main() {
    setlocale(LC_ALL, "Portuguese");
    menuInicial();
    return 0;
}

/*Fun��o que apresenta o t�tulo do algoritmo e solicita a entrada de dados para a convers�o*/
int menuInicial (){

    int op;
    double valorParaConverter;
    int cont = 1; //conta quantas vezes o menu principal j� foi exibido

    do {
        if (cont != 1){ //limpa a tela se o menu for exibido novamente pela 2 vez
            limparTela();
        }
        printf("\n-----------------------------------------------------------------\n");
        printf("\n\n --> ALGORITMO  DE CONVERS�O DE TEMPERATURA <-- \n\n");
        printf("\n..............................\n");
        printf("\nInforme qual ser� o tipo de entrada: \n");
        printf("\n1. Fahrenheit \n0. SAIR\n" );
        printf ("\n\nSua resposta: ");
        scanf ("%d", &op);

        switch (op){

        case 1:
            printf("\n..............................\n");
            printf("\nInforme o valor em Fahrenheit: ");
            scanf("%lf", &valorParaConverter);
            menuDeConversoes(valorParaConverter, 1);
            break;

        default:
            printf("\n\n ERRO: SELECIONE UMA OP��O V�LIDA!!! \n\n");
            system ("pause");
            break;
        }
        cont++;
    } while (op != 0);

    printf("\n-----------------------------------------------------------------\n");


    return 0;
}


/*Fun��o que recebe um valor para a convers�o e seu tipo para executar a convers�o correta*/
double menuDeConversoes(double valorParaConverter, int tipoAnterior){

    int op;
    int cont = 1; //conta quantas vezes o menu principal j� foi exibido

    do {
        if (cont != 1){ //limpa a tela se o menu for exibido novamente pela 2 vez
            limparTela();
        }

        printf("\n..............................\n");
        printf("\nInforme a op��o para qual deseja converter este valor: \n");
        printf("\n1. Graus Cent�grados \n0. SAIR\n" );
        printf ("\n\nSua resposta: ");
        scanf ("%d", &op);

        switch (op){

        case 1:
                if (tipoAnterior == 1){
                    FahrenheitCentigrados(valorParaConverter);
                    return 0; //flag de sa�da
                }
            break;

        default:
            printf("\n\n ERRO: SELECIONE UMA OP��O V�LIDA!!! \n\n");
            system ("pause");
            break;
        }

        cont ++;

        } while (op != 0);

    return 0;

}

/*Converte um valor fahrenheit para graus centigrados e exibe o resultado na tela*/
void FahrenheitCentigrados(double f) {

    double result;

    result = (f - 32) * 5 / 9;
    printf("\n..............................\n");
    printf ("\n\n RESULTADO DA CONVERS�O FAHRENHEIT PARA CENT�GRADOS � = %lf \n\n", result);
    printf("\n-----------------------------------------------------------------\n");
    system("pause");

}

//verifica se � windows ou linux e limpa o console
void limparTela() {
#ifdef _WIN32 //Verifica se � Windows
    system("cls");
#else
    system("clear");
#endif
}
