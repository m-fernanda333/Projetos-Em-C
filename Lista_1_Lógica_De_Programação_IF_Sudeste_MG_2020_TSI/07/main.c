/* ENUNCIADO

 Faça um algoritmo que leia quanto você ganha por hora e o número de horas trabalhadas no
mês. Na sequência, calcule e mostre o total do seu salário no referido mês.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> //para usar isdigit e atoi
#include "cabecalho.h"

int main(){

    setlocale(LC_ALL, "Portuguese");
    menuPrincipal();

    return 0;
}

void menuPrincipal(){

    int op, check1, check2;
    char valorHora[1000], totalHoras[1000];
    double valorHoraDouble, totalHorasDouble;

    do{
        printf("\n-----------------------------------------------------------------------------\n");
        printf("\n\n --> ALGORITMO HORAS TRABALHADAS <--\n\n");
        printf("\n..............................\n");
        printf("\nInforme o valor que você ganha por hora trabalhada (R$): ");
        scanf ("%s", &valorHora);
        check1 = verificarEntradaNumerica(valorHora);
        valorHoraDouble = atof(valorHora); //convertendo o char para double p/ verificar se é 0 ou menor que 0
        check2 = verificaZero(valorHoraDouble);
        if (check1 == 0 && check2 == 0) {
            printf("\nInforme quantas horas você trabalhou neste mês: ");
            scanf("%s", &totalHoras);
            check1 = verificarEntradaNumerica(totalHoras);
            totalHorasDouble = atof(totalHoras);
            check2 = verificaZero(totalHorasDouble);
            if (check1 == 0 && check2 == 0) {
                //relatporio
                double result = totalHorasDouble * valorHoraDouble;
                printf("\n-----------------------------------------------------------------------------\n");
                printf("\nSALÁRIO MENSAL = R$ %lf\n", result);
                op = 0;
            }
        }



    }while (op != 0);

    printf("\n-----------------------------------------------------------------------------\n");

}

/*Função que impede que o usário digite caracteres que não sejam numpericos e (-) (,)*/
int verificarEntradaNumerica(char entrada[1000]) {
    int pontoDecimal = 0;  // Flag para controlar a presença de um ponto decimal
    int inicio = 0;  // Índice inicial para verificar se há um sinal negativo

    if (entrada[0] == '-') {
        inicio = 1;
    }

    for (int i = inicio; entrada[i] != '\0'; i++) {
        if (!isdigit(entrada[i])) {
            if (entrada[i] == '.' && pontoDecimal == 0) {
                pontoDecimal = 1;  // Encontrou um ponto decimal válido
            } else if (entrada[i] != ',' && entrada[i] != '-') {
                printf("\n\nERRO SÃO PERMITIDOS SOMENTE CARACTERES NÚMERICOS (0..9) E VÍRGULA (",")!!!\n\n");
                system("pause");
                limparTela();
                return 1;
            }
        }
    }
    return 0;
}

/*Função que irá verificar se o valor (double) fornecido é menor ou igual a 0, retornando 1 caso verdadeiro e 0 caso contrário*/
int verificaZero(double valor){
    if(valor <= 0){
        printf("\n\nERRO: O VALOR NÃO PODE SER MENOR OU IGUAL A 0!!!\n\n");
        system ("pause"); limparTela();
        return 1;
    }
    return 0;
}

//verifica se é windows ou linux e limpa o console
void limparTela() {
#ifdef _WIN32 //Verifica se é Windows
    system("cls");
#else
    system("clear");
#endif
}
