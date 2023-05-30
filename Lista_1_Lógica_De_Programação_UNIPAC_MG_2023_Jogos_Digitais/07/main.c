/* ENUNCIADO

Faça um algoritmo que leia uma temperatura em graus Fahrenheit e converta / mostre em
graus Centígrados.
Centígrados = (Fahrenheit – 32) * 5 / 9.

BONUS: Adicionei a conversão entre as 3 principais esclas trmométricas : Centígrados, Kelvin e Fahrenheit


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


double CentigradosFahrenheit(double tC);
double CentigradosKelvin(double tC);
double FahrenheitCentigrados(double tF);
double FahrenheitKelvin(double tF);
double KelvinCentigrados(double tK);
double KelvinFahrenheit(double tK);
void limparTela();


int main(){

    setlocale(LC_ALL, "Portuguese");

    double valorParaConverter;

    int op, cont = 1;

    do{

        if (cont != 1) { //limpa a tela se o menu for exibido novamente pela 2ª vez
            limparTela();
        }

        printf("\n-----------------------------------------------------------------\n");
        printf("\n\n --> ALGORITMO  DE CONVERSÃO DE TEMPERATURA <-- \n\n");
        printf("\n..............................\n");
        printf("\nInforme qual será o tipo de entrada: \n");
        printf("\n1. Centígrados \n2. Fahrenheit \n3. Kelvin \n0. SAIR\n");
        printf ("\n\nSua resposta: ");
        scanf ("%d", &op);

        switch (op) {
        case 1:
            printf("\n..............................\n");
            printf("\nInforme o valor em Centígrados: ");
            scanf("%lf", &valorParaConverter);
            //
            limparTela();
            printf("\n..............................\n");
            printf("\n\n RESULTADOS DAS CONVERSÕES \n\n");
            printf("\n Centígrados = %lf ºC", valorParaConverter);
            printf("\n Fahrenheit = %lf ºF", CentigradosFahrenheit(valorParaConverter));
            printf("\n Kelvin = %lf K\n\n", CentigradosKelvin(valorParaConverter));
            system("pause");
            //
            break;

        case 2:
            printf("\n..............................\n");
            printf("\nInforme o valor em Fahrenheit: ");
            scanf("%lf", &valorParaConverter);

            //
            limparTela();
            printf("\n..............................\n");
            printf("\n\n RESULTADOS DAS CONVERSÕES \n\n");
            printf("\n Centígrados = %lf ºC", FahrenheitCentigrados(valorParaConverter));
            printf("\n Fahrenheit = %lf ºF", valorParaConverter);
            printf("\n Kelvin = %lf K\n\n", FahrenheitKelvin(valorParaConverter));
            system("pause");
            //
            break;

        case 3:
            printf("\n..............................\n");
            printf("\nInforme o valor em Kelvin: ");
            scanf("%lf", &valorParaConverter);

            //
            limparTela();
            printf("\n..............................\n");
            printf("\n\n RESULTADOS DAS CONVERSÕES \n\n");
            printf("\n Centígrados = %lf ºC", KelvinCentigrados(valorParaConverter) );
            printf("\n Fahrenheit = %lf ºF", KelvinFahrenheit(valorParaConverter) );
            printf("\n Kelvin = %lf K\n\n", valorParaConverter);
            system("pause");
            //
            break;

        default:
            if (op != 0){ //verificador para que o default não aconteça caso op seja 0, ou seja o suer deseja sair
                printf("\n\n ERRO: SELECIONE UMA OPÇÃO VÁLIDA!!! \n\n");
                system("pause");
            }
            break;
        }
        cont++; //contador p/ organizar e limpar o console nos momentos certos
    }while(op != 0);

    printf("\n-----------------------------------------------------------------\n");
return 0;
}

double CentigradosFahrenheit(double tC) {
    double result = (tC * 9/5) + 32;
    return result;
}

double CentigradosKelvin(double tC) {
    double result = tC + 273.15;
    return result;
}

double FahrenheitCentigrados(double tF) {
    double result = (tF - 32) * 5/9;
    return result;
}

double FahrenheitKelvin(double tF) {
    double result = (tF - 32) * 5/9 + 273.15;
    return result;
}

double KelvinCentigrados(double tK) {
    double result = tK - 273.15;
   return result;
}

double KelvinFahrenheit(double tK) {
    double result = (tK - 273.15) * 9/5 + 32; //Fahrenheit = (Kelvin - 273.15) * 9/5 + 32.
    return result;
}


//verifica se é Windows ou Linux e limpa o console
void limparTela() {
#ifdef _WIN32 //Verifica se é Windows
    system("cls");
#else
    system("clear");
#endif
}
