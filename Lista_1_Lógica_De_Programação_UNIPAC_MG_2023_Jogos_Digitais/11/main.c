#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

void menuPrincipal();
void gerarResultado(double a, double b);
int verificarEntradaNumerica(char entrada[]);
int verificaZero(double valor);
void limparTela();

int main() {
    setlocale(LC_ALL, "Portuguese");
    menuPrincipal();
    return 0;
}

void menuPrincipal() {
    int op, check1, check2;
    char aChar[1000], bChar[1000];
    double a, b;

    do {
        printf("\n-----------------------------------------------------------------------------\n");
        printf("\n\n --> ALGORITMO FUNÇÃO DE 1º GRAU <--\n\n");
        printf("\n..............................\n");
        printf("\nUma função de 1º grau possui o formato: f(x) = ax + b. \nOnde 'a' e 'b' são variáveis conhecidas e deseja-se encontrar o valor de X. Sendo assim, informe: ");
        printf("\n\n O valor de a: ");
        scanf("%s", aChar);
        check2 = verificarEntradaNumerica(aChar);
        a = atof(aChar);
        check1 = verificaZero(a);
        if (check1 == 0 && check2 == 0) {
            printf(" O valor de b: ");
            scanf("%s", bChar);
            check2 = verificarEntradaNumerica(bChar);
            b = atof(bChar);
            if (check2 == 0) {
                gerarResultado(a, b);
                op = 0;
            }
        }

    } while (op != 0);
}

void gerarResultado(double a, double b) {
    if (a == 0) {
        printf("\n\nERRO: O valor de 'a' não pode ser igual a zero!\n\n");
        system("pause");
        limparTela();
        return;
    }

    double x = -b / a;

    printf("\n..............................\n");
    printf("\nRESULTADO DA EQUAÇÃO f(x) = %.2lf * X + %.2lf = %.2lf\n", a, b, x);
}

int verificarEntradaNumerica(char entrada[]) {
    int pontoDecimal = 0;
    int inicio = 0;

    if (entrada[0] == '-') {
        inicio = 1;
    }

    for (int i = inicio; entrada[i] != '\0'; i++) {
        if (!isdigit(entrada[i])) {
            if (entrada[i] == '.' && pontoDecimal == 0) {
                pontoDecimal = 1;
            } else if (entrada[i] != ',' && entrada[i] != '-') {
                printf("\n\nERRO: São permitidos somente caracteres numéricos (0-9), vírgula (',') e sinal de menos ('-')!\n\n");
                system("pause");
                limparTela();
                return 1;
            }
        }
    }
    return 0;
}

int verificaZero(double valor) {
    if (valor == 0) {
        printf("\n\nERRO: O valor não pode ser igual a zero!\n\n");
        system("pause");
        limparTela();
        return 1;
    }
    return 0;
}

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
