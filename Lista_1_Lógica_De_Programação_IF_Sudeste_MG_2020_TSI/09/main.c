/* ENUNCIADO

Uma P.A. (progressão aritmética) fica determinada pela sua razão (r) e pelo primeiro termo(a1).
Escreva um algoritmo que seja capaz de determinar qualquer termo de uma P.A., dado a razão e o
primeiro termo.
a
n
= a1 + (n − 1) × r

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

void menuPrincipal(){

    int op, check1, posicao;
    double diferenca, primeiroTermo, result;
    char diferencaChar[1000], primeiroTermoChar[1000], posicaoChar[1000];

     do {
        printf("\n-----------------------------------------------------------------------------\n");
        printf("\n\n --> ALGORITMO PARA ACHAR QUALQUER TERMO DE UMA P.A. <--\n\n");

        printf("\n..............................\n"); //descrição e informações uteis ao user
        printf("\n Uma P.A. é uma sequência numérica onde a diferença entre termos consecutivos é sempre a mesma.");
        printf("\n Para utilizar nosso algoritmo, você deve saber: \n\n * A diferença entre os termos de sua P.A; \n * Primeiro termo; \n * Posição do termo que você quer descobrir;\n");
        printf("\n..............................\n");

        //area de entrada de dados
        printf("\n\n Informe a diferença entre os termos: ");
        scanf("%s", &diferencaChar); //tem que ser real,  não pode ser 0 e não pode ser letra
        check1 = verificarEntradaNumerica(diferencaChar);
        if (check1 == 0) { //se diferenca for uma entrada numerica
            diferenca = atof(diferencaChar);
            check1 = verificaDoubleZero(diferenca);
            if (check1 == 0){ //se diferenca não for igual a zero
                printf("\n\n Informe o primeiro termo da sequência: ");
                scanf("%s", &primeiroTermoChar); //real, pode ser 0 e não pode ser letra
                check1 = verificarEntradaNumerica(primeiroTermoChar);
                if (check1 == 0){ //se diferenca for uma entrada numerica
                    primeiroTermo = atof(primeiroTermoChar);
                    printf("\n\n Informe a posição do termo que você deseja descobrir: "); //tem que ser int, maior que 0 e não pode ser letra
                    scanf("%s", &posicaoChar);
                    check1 = verificarEntradaNumerica(posicaoChar);
                    if (check1 == 0){ //se diferenca for uma entrada numerica
                        posicao = atoi(posicaoChar);
                        check1 = verificaIntZero(posicao);
                        if (check1 == 0){ //se for maior que 0

                            //CALCULO DA P.A.
                            //a + (n - 1) * d
                            //a = primeiro termo
                            //n = posição do termo a ser descoberto
                            //d = diferença entre eles

                            result = primeiroTermo + (posicao - 1) * diferenca;
                            printf("\n..............................\n");
                            printf("\nO TERMO %d º DA P.A. EM QUESTÃO É = %lf\n", posicao, result);
                            printf("\n-----------------------------------------------------------------------------\n");
                            op = 0;

                        }

                    }
                }
            }
        }

     }while (op != 0);

}

/*Função que irá verificar se o valor (double) fornecido é  menor que 0, retornando 1 caso verdadeiro e 0 caso contrário*/
int verificaDoubleZero(double valor){
    if(valor == 0){
        printf("\n\nERRO: O VALOR NÃO PODE SER IGUAL A 0!!!\n\n");
        system ("pause"); limparTela();
        return 1;
    }
    return 0;
}

/*Função que irá verificar se o valor (int) fornecido é  menor que 0 ou igual a 0, retornando 1 caso verdadeiro e 0 caso contrário*/
int verificaIntZero(double valor){
    if(valor <= 0){
        printf("\n\nERRO: O VALOR NÃO PODE SER MENOR OU IGUAL A 0!!!\n\n");
        system ("pause"); limparTela();
        return 1;
    }
    return 0;
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

void limparTela() {
#ifdef _WIN32 //Verifica se é Windows
    system("cls");
#else
    system("clear");
#endif
}
