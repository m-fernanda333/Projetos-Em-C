/* ENUNCIADO

    Fa�a um algoritmo ara resolver um sistema de equa��es do primeiro grau.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "cabecalho.h"
#include <ctype.h>

int main (){

    setlocale(LC_ALL, "Portuguese");
    menuPrincipal();
    return 0;
}

/*Fun��o que ir� exibir o menu e suas op��es apresentando o algoritmo*/
void menuPrincipal(){

    int op, check1, check2;
    char aChar[1000], bChar[1000];
    double a, b;

    do {
        printf("\n-----------------------------------------------------------------------------\n");
        printf("\n\n --> ALGORITMO FUN��O DE 1� GRAU <--\n\n");
        printf("\n..............................\n");
        printf("\nUma fun��o de 1� grau possu� o formato: f(x) = ax + b. \nOnde, 'a' e 'b' s�o vari�veis conhecidas e deseja-se encontrar o valor de X. Sendo assim, informe: ");
        printf("\n\n O valor de a: ");
        scanf("%s", &aChar);
        check2 = verificarEntradaNumerica(aChar);
        a = atof(aChar);
        check1 = verificaZero(a);
        if (check1 == 0 && check2 == 0){ //so permite a passagem se a for v�lido
            printf(" O valor de b: ");
            scanf("%s", &bChar);
            check2 = verificarEntradaNumerica(bChar);
            b = atof(bChar);
            if (check2 == 0){ //se B for v�lido
                gerarResultado(a, b);
            }

        }

    }while (op != 0);

}

/**/
void gerarResultado(double a, double b) {
    double x = -b / a;

    printf("\n..............................\n");
    printf("\nRESULTADO DA EQUA��O f(x) = %.2lf * X + %.2lf = %.2lf\n", a, b, x);
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
                printf("\n\nERRO S�O PERMITIDOS SOMENTE CARACTERES N�MERICOS (0..9), V�RGULA (",") e ("-")!!!\n\n");
                system("pause"); limparTela();
                return 1;
            }
        }
    }
    return 0;
}

/*Fun��o que ir� verificar se o valor (double) fornecido �  igual a 0, retornando 1 caso verdadeiro e 0 caso contr�rio*/
int verificaZero(double valor){
    if(valor == 0){
        printf("\n\nERRO: O VALOR N�O PODE SERIGUAL A 0!!!\n\n");
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
