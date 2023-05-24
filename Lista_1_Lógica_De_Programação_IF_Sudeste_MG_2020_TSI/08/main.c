/* ENUNCIADO

    Faça um algoritmo ara resolver um sistema de equações do primeiro grau.

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

/*Função que irá exibir o menu e suas opções apresentando o algoritmo*/
void menuPrincipal(){

    int op, check1, check2;
    char aChar[1000], bChar[1000];
    double a, b;

    do {
        printf("\n-----------------------------------------------------------------------------\n");
        printf("\n\n --> ALGORITMO FUNÇÃO DE 1º GRAU <--\n\n");
        printf("\n..............................\n");
        printf("\nUma função de 1º grau possuí o formato: f(x) = ax + b. \nOnde, 'a' e 'b' são variáveis conhecidas e deseja-se encontrar o valor de X. Sendo assim, informe: ");
        printf("\n\n O valor de a: ");
        scanf("%s", &aChar);
        check2 = verificarEntradaNumerica(aChar);
        a = atof(aChar);
        check1 = verificaZero(a);
        if (check1 == 0 && check2 == 0){ //so permite a passagem se a for válido
            printf(" O valor de b: ");
            scanf("%s", &bChar);
            check2 = verificarEntradaNumerica(bChar);
            b = atof(bChar);
            if (check2 == 0){ //se B for válido
                gerarResultado(a, b);
            }

        }

    }while (op != 0);

}

/**/
void gerarResultado(double a, double b) {
    double x = -b / a;

    printf("\n..............................\n");
    printf("\nRESULTADO DA EQUAÇÃO f(x) = %.2lf * X + %.2lf = %.2lf\n", a, b, x);
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
                printf("\n\nERRO SÃO PERMITIDOS SOMENTE CARACTERES NÚMERICOS (0..9), VÍRGULA (",") e ("-")!!!\n\n");
                system("pause"); limparTela();
                return 1;
            }
        }
    }
    return 0;
}

/*Função que irá verificar se o valor (double) fornecido é  igual a 0, retornando 1 caso verdadeiro e 0 caso contrário*/
int verificaZero(double valor){
    if(valor == 0){
        printf("\n\nERRO: O VALOR NÃO PODE SERIGUAL A 0!!!\n\n");
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
