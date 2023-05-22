/* ENUNCIADO

 Fa�a um algoritmo que leia quanto voc� ganha por hora e o n�mero de horas trabalhadas no
m�s. Na sequ�ncia, calcule e mostre o total do seu sal�rio no referido m�s.

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
        printf("\nInforme o valor que voc� ganha por hora trabalhada (R$): ");
        scanf ("%s", &valorHora);
        check1 = verificarEntradaNumerica(valorHora);
        valorHoraDouble = atof(valorHora); //convertendo o char para double p/ verificar se � 0 ou menor que 0
        check2 = verificaZero(valorHoraDouble);
        if (check1 == 0 && check2 == 0) {
            printf("\nInforme quantas horas voc� trabalhou neste m�s: ");
            scanf("%s", &totalHoras);
            check1 = verificarEntradaNumerica(totalHoras);
            totalHorasDouble = atof(totalHoras);
            check2 = verificaZero(totalHorasDouble);
            if (check1 == 0 && check2 == 0) {
                //relatporio
                double result = totalHorasDouble * valorHoraDouble;
                printf("\n-----------------------------------------------------------------------------\n");
                printf("\nSAL�RIO MENSAL = R$ %lf\n", result);
                op = 0;
            }
        }



    }while (op != 0);

    printf("\n-----------------------------------------------------------------------------\n");

}

/*Fun��o que impede que o us�rio digite caracteres que n�o sejam numpericos e (-) (,)*/
int verificarEntradaNumerica(char entrada[1000]) {
    int pontoDecimal = 0;  // Flag para controlar a presen�a de um ponto decimal
    int inicio = 0;  // �ndice inicial para verificar se h� um sinal negativo

    if (entrada[0] == '-') {
        inicio = 1;
    }

    for (int i = inicio; entrada[i] != '\0'; i++) {
        if (!isdigit(entrada[i])) {
            if (entrada[i] == '.' && pontoDecimal == 0) {
                pontoDecimal = 1;  // Encontrou um ponto decimal v�lido
            } else if (entrada[i] != ',' && entrada[i] != '-') {
                printf("\n\nERRO S�O PERMITIDOS SOMENTE CARACTERES N�MERICOS (0..9) E V�RGULA (",")!!!\n\n");
                system("pause");
                limparTela();
                return 1;
            }
        }
    }
    return 0;
}

/*Fun��o que ir� verificar se o valor (double) fornecido � menor ou igual a 0, retornando 1 caso verdadeiro e 0 caso contr�rio*/
int verificaZero(double valor){
    if(valor <= 0){
        printf("\n\nERRO: O VALOR N�O PODE SER MENOR OU IGUAL A 0!!!\n\n");
        system ("pause"); limparTela();
        return 1;
    }
    return 0;
}

//verifica se � windows ou linux e limpa o console
void limparTela() {
#ifdef _WIN32 //Verifica se � Windows
    system("cls");
#else
    system("clear");
#endif
}
