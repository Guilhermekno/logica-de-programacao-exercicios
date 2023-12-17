// Cadastrar e consultar informações de clientes.
// Linguagem usada: C++.

#include <iostream>
#include <string>

using namespace std;

const int LIMITE = 100;
// Aumentar limite caso falte espaço

int main()
{
    struct CADASTRO_REG
    {
        char NOME[100];
        int CEP;
        int TELEFONE;
        int RG;
    } CADASTRO[LIMITE];
    int controle = 10;
    int controlefor = 0;
    int escolha;

    cout << "Ola! Bem-vindo(a) a interface do programa.\n";
    do
    {
        cout << "\nPara Cadastrar um novo cliente, digite '0'.\n";
        cout << "Para Consultar dados do cliente, digite '1'.\n\n";
        cin >> controle;
        if (controle == 0)
        {
            for (int i = controlefor; i < LIMITE; i++)
            {
                cout << "Digite o NOME do cliente: ";
                fflush(stdin);
                fgets(CADASTRO[i].NOME, 100, stdin);

                cout << "Digite o CEP do cliente (somente numeros): ";
                cin.ignore();
                cin >> CADASTRO[i].CEP;
                cout << "Digite o TELEFONE do cliente (somente numeros): ";
                cin.ignore();
                cin >> CADASTRO[i].TELEFONE;
                cout << "Digite o RG do cliente: ";
                cin.ignore();
                cin >> CADASTRO[i].RG;

                controlefor++;

                cout << "Digite '0' para salvar e cadastrar outro usuario." << endl;
                cout << "Digite '1' para salvar e sair da tela de cadastro." << endl;
                cin >> escolha;
                if (escolha == 1)
                    break;
            }
        }
        else
        {
            for (int i = 0; i < controlefor; i++)
            {
                printf("\n-----CODIGO_%d-----\n", i);
                printf("NOME: %s\n", CADASTRO[i].NOME);
                printf("CEP: %d\n", CADASTRO[i].CEP);
                printf("TELEFONE: %d\n", CADASTRO[i].TELEFONE);
                printf("RG: %d\n", CADASTRO[i].RG);
                cout << "-------------------\n";
            }
        }
        cout << "\nDigite '0' para desligar o programa." << endl;
        cout << "Digite '1' para realizar ou consultar outro cadastro." << endl;
        cout << "\n#Atencao! os dados sao perdidos todas as vezes em que o programa e desligado." << endl;
        cin >> controle;
        if (controle == 1)
            controle = 10;
    } while (controle == 10);

    return 0;
}