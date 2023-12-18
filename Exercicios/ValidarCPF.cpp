// Calculadora de digito verificador do CPF.
// Linguagem usada: C++.

#include <iostream>

using namespace std;

void digitoverificador(int *ptr);

int main()
{
    int cpf[11];

    cout << "Calculadora de digito verificador do CPF: \n";
    for (int i = 0; i < 9; i++)
    {
        printf("\nInforme o %d* digito: ", i + 1);
        cin >> cpf[i];
    }

    digitoverificador(&cpf[0]);

    return 0;
}

void digitoverificador(int *ptr)
{
    int soma;
    for (int j = 0; j < 2; j++)
    {
        soma = 0;
        for (int i = 0; i < 9 + j; i++)
        {
            soma += (ptr[i] * (10 + j - i));
        }
        soma = (soma % 11);
        if (soma < 2)
        {
            ptr[9 + j] = 0;
        }
        else
        {
            soma = 11 - soma;
            ptr[9 + j] = soma;
        }
    }
    cout << "\n\nSeu cpf eh: ";
    for (int i = 0; i < 11; i++)
        cout << ptr[i];
}
