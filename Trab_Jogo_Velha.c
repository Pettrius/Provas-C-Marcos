#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Tamanho do tabuleiro
#define TAMANHO 3

// Estrutura do jogo
char tabuleiro[TAMANHO][TAMANHO];

// Inicializar o tabuleiro com espaços em branco
void inicializarTabuleiro()
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

// Exibir o tabuleiro na tela
void exibirTabuleiro()
{
    for (int i = 0; i < TAMANHO; i++)
    {
        for (int j = 0; j < TAMANHO; j++)
        {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAMANHO - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < TAMANHO - 1)
        {
            for (int k = 0; k < TAMANHO * 4 - 1; k++)
            {
                printf("-");
            }
            printf("\n");
        }
    }
}

// Verificar se a jogada eh valida
int jogadaValida(int x, int y)
{
    if (x >= 0 && x < TAMANHO && y >= 0 && y < TAMANHO && tabuleiro[x][y] == ' ')
    {
        return 1; // Jogada valida
    }
    else
    {
        return 0; // Jogada invalida
    }
}

// Verificar se houve um vencedor
int verificarVencedor(char jogador)
{
    // Verificar linhas e colunas
    for (int i = 0; i < TAMANHO; i++)
    {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador))
        {
            return 1; // Vencedor encontrado
        }
    }

    // Verificar diagonais
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador))
    {
        return 1; // Vencedor encontrado
    }

    return 0; // Sem vencedor ainda
}

int main()
{
    int jogadas = 0;
    int x, y;
    int jogador = 1; // Começa com o jogador 1

    inicializarTabuleiro();

    do
    {
        // Exibir o tabuleiro
        exibirTabuleiro();

        // Pedir coordenadas da jogada
        printf("Jogador %d, digite as coordenadas (linha e coluna) para a sua jogada: ", jogador);
        scanf("%d %d", &x, &y);

        x--; // Ajuste para a matriz do jogo começar em 0,0

        if (jogadaValida(x, y))
        {
            // Marcar a jogada no tabuleiro
            if (jogador == 1)
            {
                tabuleiro[x][y] = 'X';
            }
            else
            {
                tabuleiro[x][y] = 'O';
            }
            jogadas++;

            // Verificar se houve um vencedor
            if (verificarVencedor(jogador == 1 ? 'X' : 'O'))
            {
                exibirTabuleiro();
                printf("Parabéns, Jogador %d venceu!\n", jogador);
                break;
            }

            // Mudar de jogador
            jogador = (jogador == 1) ? 2 : 1;
        }
        else
        {
            printf("Jogada inválida. Tente novamente.\n");
        }

    } while (jogadas < TAMANHO * TAMANHO);

    if (jogadas == TAMANHO * TAMANHO)
    {
        printf("Empate! O jogo terminou empatado.\n");
    }

    return 0;
}