#include <stdio.h>
#include <string.h>

int vetor(char string1[50][50])
{
    int tamanho1;
    int tamanho2;
    int soma;
    int media;
    int auxiliar1;
    int auxiliar2;
    int total_de_strings;

    for (int i = 0; i < 50; i++)
    {
        tamanho1 = strlen(string1[i][i]);
        i++;
        auxiliar1 = i;

        for(int j = 0; j < 50; j++)
        {
            tamanho2 = strlen(string1[j][j]);
            j++;
            auxiliar2 = j;
            total_de_strings = i + j;
        }
        
    }

    soma = tamanho1 + tamanho2;
    media = soma / total_de_strings;

    return media;
}

int main()
{
    char vetor_de_string[50][50];
    int retorno;

    printf("Entre com o vetor de strings:\n");
    gets(vetor_de_string);
    while(getchar() != "\n");

    retorno = vetor(vetor_de_string);

    printf("O tamanho medio entre todas as strings armazenadas no vetor eh de: %d.\n", retorno);

}