/* ENUNCIADO

Faça um algoritmo que leia quanto você ganha por hora e o número de horas trabalhadas no
mês. Na sequência, calcule e mostre o total do seu salário no referido mês.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limparTela();


int main(){

    float valorPorHora, qtdHoras;

    printf("\n-----------------------------------------------------------------\n");
    printf("\n\n --> ALGORITMO CALCULA SALÁRIO <-- \n\n");
    printf("\n..............................\n");

        printf("\n Informe o valor ganho por hora trabalhada (R$): ");
        scanf("%f", &valorPorHora);
        printf("\n Informe quantas horas foram trabalhadas neste mês: ");
        scanf("%f", &qtdHoras);

        if (valorPorHora != 0 && qtdHoras != 0 && valorPorHora > 0 && qtdHoras > 0 ){
            printf("\n..............................\n");
            printf("\n SALÁRIO = %2.f\n", valorPorHora*qtdHoras);
            printf("\n-----------------------------------------------------------------\n\n");
            system("pause");
            limparTela();
        }
        else {
            printf("\n\nERRO: NENHUM VALOR PODE SER IGUAL OU MENOR QUE ZERO! \n\n");
            system("pause");
            limparTela();
        }

    printf("\n-----------------------------------------------------------------\n");

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
