/* ENUNCIADO

    Uma empresa possui, para um determinado funcion�rio, uma ficha contendo: o nome,
n�mero de horas trabalhadas e o no de dependentes de um funcion�rio. Considerando que:
a) A empresa paga 12 reais por hora e 40 reais por dependentes.
b) Sobre o sal�rio s�o feito descontos de 8,5% para o INSS e 5% para IR.

Fa�a um algoritmo para ler o Nome, n�mero de horas trabalhadas e n�mero de dependentes
de um funcion�rio. Ap�s a leitura e os devidos c�lculos escreva qual o Nome, sal�rio bruto,
os valores descontados para cada tipo de imposto e finalmente qual o sal�rio l�quido do
funcion�rio.


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//constantes
#define TAMANHOMAX 1000

int main(){

    setlocale (LC_ALL, "Portuguese");

    //var
    char nome[TAMANHOMAX];
    float horasT = 0, salarioBruto = 0, inss = 0, ir = 0, salarioLiquido = 0;
    int qtdDependentes;

    printf("\n-----------------------------------------------------------------\n");
    printf("\n\n --> ALGORITMO FICHA FUNCION�RIO <-- \n\n");
    printf("\n..............................\n");

    printf("\n Informe o nome: ");
    fgets(nome, TAMANHOMAX, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remover o caractere de nova linha

    printf("\n Informe a quantidade de horas trabalhadas: ");
    scanf("%f", &horasT);

    printf("\n Informe a quantidade de dependentes: ");
    scanf("%d", &qtdDependentes);

    //calculos
    salarioBruto = (horasT * 12) + (qtdDependentes * 40);
    inss = ((salarioBruto * 8.5)/100);
    ir = ((salarioBruto * 5)/100);
    salarioLiquido = (salarioBruto - inss) - ir;

    //resultado na tela
    printf("\n..............................\n");
    printf("\n Nome = %s", nome);
    printf("\n Horas Trabalhadas = %.2f", horasT);
    printf("\n Dependentes = %d", qtdDependentes);
    printf("\n Sal�rio Bruto = %.2f", salarioBruto);
    printf("\n Desconto INSS = %.2f", inss);
    printf("\n Desconto IR = %.2f", ir);
    printf("\n Sal�rio L�quido = %.2f", salarioLiquido);
     printf("\n-----------------------------------------------------------------\n");

return 0;
}
