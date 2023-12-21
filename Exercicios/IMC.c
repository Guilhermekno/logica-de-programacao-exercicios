// Calculadora IMC.
// Programa escrito em C.

#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    float peso, altura, imc;
    char nomeacao[20], *ptr[20];
    printf("Calcule seu IMC: \n\n");
    printf("Informe seu peso em Kg (ex: 68.9 Kg = 68900 g):");
    scanf("%f", &peso);
    printf("\nInforme sua altura em M (ex: 1.5 M = 150 cm): ");
    scanf("%f", &altura);
    imc = peso / (pow(altura, 2));
    if (imc < 18.5)
        strcpy(nomeacao, "baixo peso");
    else if (imc < 24.99)
        strcpy(nomeacao, "peso normal");
    else if (imc < 29.99)
        strcpy(nomeacao, "sobrepeso");
    else
        strcpy(nomeacao, "obesidade");
    printf("\n\nSeu IMC eh: %.2f . Voce esta com: %s .", imc, nomeacao);
    return 0;
}
