#include <stdio.h>
#include <string.h>

int media(char str1[50], char str2[50])
{
    int tamanho1;
    int tamanho2;
    int soma;
    int media;

    tamanho1 = strlen(str1);
    tamanho2 = strlen(str2);

    soma = tamanho1 + tamanho2;

    media = soma / 2;

    return media;

}

int main()
{
    char string1[50];
    char string2[50];
    int retorno;

    printf("Digite a primeira string:\n");
    gets(string1);
    fflush(stdin);

    printf("Digite a segunda string:\n");
    gets(string2);
    fflush(stdin);

    retorno = media(string1,string2);

    printf("O tamanho medio entre a primeira string e a segunda string eh: %d", retorno);
}