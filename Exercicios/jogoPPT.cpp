// Jogo pedra papel tesoura para 2 pessoas no mesmo computador.
// Linguagem usada: C++.

#include <iostream>

using namespace std;

const int LIMITE = 3;
// Aumentar limite caso falte espaço

int main()
{
    struct jogador_reg
    {
        int escolha;
        int pontos = 0;
        char nome[100];
    } jogador[2];
    int escolha;

    cout << "Ola! Seja bem-vindo(a) ao jogo 'Pedra,Papel,Tesoura'.\n\n";
    cout << "Para consultar as regras digite '0'." << endl;
    cout << "Para jogar digite '1'." << endl;
    cin >> escolha;
    if (escolha == 0)
    {
        cout << "Regras do pedra papel tesoura:" << endl;
        cout << "1. Duas pessoas escolhem entre pedra,papel ou tesoura." << endl;
        cout << "2. Papel ganha da pedra." << endl;
        cout << "3. Pedra ganha da tesoura." << endl;
        cout << "3. Tesoura ganha do papel." << endl;
    }
    cout << "Jogador 1, digite seu nome: " << endl;
    cin >> jogador[0].nome;
    cout << "Jogador 2, digite seu nome: " << endl;
    cin >> jogador[1].nome;

    for (int i = 0; i < LIMITE; i++)
    {
        do
        {
            printf("\n\n%s escolha entre: '1' Pedra, '2' Papel e '3' Tesoura (somente numeros): ", jogador[0].nome);
            cin >> jogador[0].escolha;
        } while (jogador[0].escolha != 1 && jogador[0].escolha != 2 && jogador[0].escolha != 3);
        do
        {
            printf("\n\n%s agora e a sua vez, escolha entre: '1' Pedra, '2' Papel e '3' Tesoura (somente numeros): ", jogador[1].nome);
            cin >> jogador[1].escolha;
        } while (jogador[1].escolha != 1 && jogador[1].escolha != 2 && jogador[1].escolha != 3);

        if ((jogador[0].escolha == 1 && jogador[1].escolha == 3) || (jogador[0].escolha == 2 && jogador[1].escolha == 1) || (jogador[0].escolha == 3 && jogador[1].escolha == 2))
        {
            jogador[0].pontos++;
            printf("\nParabens! %s voce venceu a rodada e esta com %d pontos!", jogador[0].nome, jogador[0].pontos);
        }

        else if ((jogador[1].escolha == 1 && jogador[0].escolha == 3) || (jogador[1].escolha == 2 && jogador[0].escolha == 1) || (jogador[1].escolha == 3 && jogador[0].escolha == 2))
        {
            jogador[1].pontos++;
            printf("\nParabens! %s voce venceu a rodada e esta com %d pontos!", jogador[1].nome, jogador[1].pontos);
        }
        else
            cout << "Erro na linha 44-53";
    }

    if (jogador[0].pontos > jogador[1].pontos)
        printf("\n\nParabens! %s voce venceu o jogo por %d a %d !", jogador[0].nome, jogador[0].pontos, jogador[1].pontos);
    else if (jogador[1].pontos > jogador[0].pontos)
        printf("\n\nParabens! %s voce venceu o jogo por %d a %d !", jogador[1].nome, jogador[1].pontos, jogador[0].pontos);
    else
        cout << "Erro na linha 58-62";

    return 0;
}