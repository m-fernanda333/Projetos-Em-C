/* ENUNCIADO

Fa�a um algoritmo que leia quanto voc� ganha por hora e o n�mero de horas trabalhadas no
m�s. Na sequ�ncia, calcule e mostre o total do seu sal�rio no referido m�s.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limparTela();


int main(){

    float valorPorHora, qtdHoras;

    printf("\n-----------------------------------------------------------------\n");
    printf("\n\n --> ALGORITMO CALCULA SAL�RIO <-- \n\n");
    printf("\n..............................\n");

        printf("\n Informe o valor ganho por hora trabalhada (R$): ");
        scanf("%f", &valorPorHora);
        printf("\n Informe quantas horas foram trabalhadas neste m�s: ");
        scanf("%f", &qtdHoras);

        if (valorPorHora != 0 && qtdHoras != 0 && valorPorHora > 0 && qtdHoras > 0 ){
            printf("\n..............................\n");
            printf("\n SAL�RIO = %2.f\n", valorPorHora*qtdHoras);
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

//verifica se � windows ou linux e limpa o console
void limparTela() {
#ifdef _WIN32 //Verifica se � Windows
    system("cls");
#else
    system("clear");
#endif
}
