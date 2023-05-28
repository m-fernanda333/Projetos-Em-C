/* ENUNCIADO

Fa�a um algoritmo que leia as 3 notas de um aluno e calcule a m�dia final deste aluno.
Considerar que a m�dia � ponderada e que o peso das notas �: 2,3 e 5, respectivamente.

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

//constantes
#define TAMANHOMAX 1000
#define PESO1 2
#define PESO2 3
#define PESO3 5

void limparTela();
int verificarEntradaNumerica(char entrada[TAMANHOMAX]);
double mediaPonderadaPara3(double n1, double n2,  double n3);


int main(){

    setlocale (LC_ALL, "Portuguese");

    //var
    int op, check;
    char n1Char[TAMANHOMAX], n2Char[TAMANHOMAX], n3Char[TAMANHOMAX];
    double n1, n2, n3, result;
    //fimVar

    printf("\n-----------------------------------------------------------------\n");
    printf("\n\n --> ALGORITMO M�DIA FINAL <-- \n\n");
    printf("\n..............................\n");

    //entrada de dados enquanto o usu�rio quiser, 1 aluno p/ vez;
    do {
        printf("\nInforme a op��o desejada: \n\n 1. Informar 3 notas para um aluno. \n 0. SAIR. ");
        printf ("\n\nSua resposta: ");
        scanf ("%d", &op);
        printf("\n..............................\n");

        if (op == 1){ //se o user informar uma op��o v�lida, prossegue

            printf("\nInforme a 1� nota: ");
            scanf("%s", &n1Char);

            check = verificarEntradaNumerica(n1Char);
            if (check == 0) { //verifica se � uma entrda v�lida

                printf("\nInforme a 2� nota: ");
                scanf("%s", &n2Char);

                check = verificarEntradaNumerica(n2Char);
                if (check == 0) { //verifica se � uma entrda v�lida

                    printf("\nInforme a 3� nota: ");
                    scanf("%s", &n3Char);

                        check = verificarEntradaNumerica(n3Char);
                        if (check == 0) { //verifica se � uma entrda v�lida

                            //convertendo todas as entradas Char em Double
                            n1 = atof(n1Char); n2 = atof(n2Char); n3 = atof(n3Char);

                            //calcula resultado
                            result = mediaPonderadaPara3(n1, n2, n3);

                            //imprime resultado na tela
                            printf("\n..............................\n");
                            printf("\nA m�dia final do aluno � = %lf\n", result);
                            printf("\n-----------------------------------------------------------------\n");
                            system("pause");
                            limparTela();

                        }//check3
                }//check2

            } //check1


        }
        else {

            if(op != 0){ //se for inv�lida e n�o for o comando p/ sair
                printf("\n\nERRO: INFORME UMA OP��O V�LIDA!!!\n\n");
                system("pause");
                limparTela();
            }
        }


    }while(op != 0);

    printf("\n-----------------------------------------------------------------\n");

return 0;
}

/*Fun��o que calcula a m�dia ponderada para 3 valores(double), utilizando os pesos de acordo com as constantes de peso definidas no
inicio do projeto. A fun��o retorna o resultado completo.*/
double mediaPonderadaPara3(double n1, double n2,  double n3){
    double result = 0;
        result = ((n1 * PESO1) + (n2 * PESO2) + (n3 * PESO3)) / 10; //FORMULA = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / 10;
    return result;
}

/*Fun��o que verifica se o char � composto somente por caracteres num�ricos ou "." "-" e "+", retornando 0 caso positivo e caso negativo 1 e uma mensagem de erro*/
int verificarEntradaNumerica(char entrada[TAMANHOMAX]) {
    int i;
    int len = strlen(entrada);

    for (i = 0; i < len; i++) {
        char c = entrada[i];

        if (!isdigit(c) && c != '.' && c != '-' && c != '+') {
            printf("\n\nERRO: A ENTRADA DEVE CONTER SOMENTES CARACTERES NUM�RICOS!!!\n\n");
            system("pause");
            limparTela();
            return 1;
        }
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
