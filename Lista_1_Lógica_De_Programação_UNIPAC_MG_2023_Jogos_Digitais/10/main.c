/* ENUNCIADO

Faça um algoritmo para calcular a quantidade necessária de latas de tinta para pintar uma
parede com X metros de largura por H metros de altura.

Considere que o consumo de tinta por metro quadrado seja de 3 litro:

a) Minimizar o número de latas de tinta e o desperdício;
b) No mercado existem latas de 13 litros , 5 litros e 1 litro.

*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    float alt, lar, area, necessario;
    int lata13 = 0, lata5 = 0, lata1 = 0;

    // Descobrir o tamanho da parede em m^2
    printf("\nInforme a altura da parede: ");
    scanf("%f", &alt);
    printf("Informe a largura da parede: ");
    scanf("%f", &lar);

    area = alt * lar; // Tamanho em m^2
    necessario = area / 3; // Dividindo a área pelo consumo de tinta atual

    float litros = necessario;

    while (litros > 0) {

        if (litros >= 13) {
            lata13++;
            litros -= 13;
        }
        else if (litros >= 5) {
            lata5++;
            litros -= 5;
        }
        else if (litros >= 1) {
            lata1++;
            litros -= 1;
        }
        else if (litros < 1 && litros > 0){
            lata1++;
            litros -= litros;
        }
        else {
            break; // Se litros for menor que 1, sair do loop
        }
    }

    printf("\n\nRELATÓRIO\n");
    printf("Altura: %.2f\n", alt);
    printf("Largura: %.2f\n", lar);
    printf("Área: %.2f m2\n", area);
    printf("Litros Necessários: %.2f\n", necessario);
    printf("Quantidade de Latas de 13 litros: %d\n", lata13);
    printf("Quantidade de Latas de 5 litros: %d\n", lata5);
    printf("Quantidade de Latas de 1 litro: %d\n", lata1);

    return 0;
}
