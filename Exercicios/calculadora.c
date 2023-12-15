
// Calculadora que faz as 4 operações simples de matemática.
// Linguagem utilizada: C.

#include <stdio.h>

float subtracao(int controle, float *variaveis);
float adicao(int controle, float *variaveis);
float multiplicacao(int controle, float *variaveis);
float divisao(int controle, float *variaveis);

int main()
{
    float variaveis[100];
    int controle, escolha;
    printf("Calculadora simples em C\n\n");
    do
    {
        printf("Digite a quantidade de valores que quer inserir: ");
        scanf("%d", &controle);
        for (int i = 0; i < controle; i++)
        {
            printf("\nDigite o %d numero: ", i + 1);
            scanf("%f", &variaveis[i]);
        }
        printf("\n\nQual operacao deseja fazer?");
        do
        {
            printf("\nDigite '0' para subtracao");
            printf("\nDigite '1' para adicao");
            printf("\nDigite '2' para multiplicacao");
            printf("\nDigite '3' para divisao");
            scanf("%d", &escolha);
            switch (escolha)
            {
            case 0:
                printf("\n\nResultado: %.2f", subtracao(controle, &variaveis[0]));
                break;
            case 1:
                printf("\n\nResultado: %.2f", adicao(controle, &variaveis[0]));
                break;
            case 2:
                printf("\n\nResultado: %.2f", multiplicacao(controle, &variaveis[0]));
                break;
            case 3:
                printf("\n\nResultado: %.2f", divisao(controle, &variaveis[0]));
                break;
            default:
                printf("\n\nInsira um numero valido: \n");
                break;
            }
        } while ((escolha != 0) && (escolha != 1) && (escolha != 2) && (escolha != 3));
        printf("\n\nSe deseja realizar outra operação, digite '0'.\nPara parar, digite um caracter != 0: ");
        scanf("%d", &controle);
    } while (controle == 0);
    return 0;
}

float subtracao(int controle, float *variaveis)
{
    float resultado = variaveis[0];
    for (int i = 1; i < controle; i++)
    {
        resultado -= variaveis[i];
    }
    return resultado;
}

float adicao(int controle, float *variaveis)
{
    float resultado = variaveis[0];
    for (int i = 1; i < controle; i++)
    {
        resultado += variaveis[i];
    }
    return resultado;
}

float multiplicacao(int controle, float *variaveis)
{
    float resultado = variaveis[0];
    for (int i = 1; i < controle; i++)
    {
        resultado *= variaveis[i];
    }
    return resultado;
}

float divisao(int controle, float *variaveis)
{
    float resultado = variaveis[0];
    for (int i = 1; i < controle; i++)
    {
        resultado /= variaveis[i];
    }
    return resultado;
}
