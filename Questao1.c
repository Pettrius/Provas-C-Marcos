#include <stdio.h>

int soma(int num1,int num2)
{
    int resultado = num1 + num2;

    return resultado;
}

int subtrair(int num1, int num2)
{
    int resultado = num1 - num2;

    return resultado;
}

int multiplicar(int num1, int num2)
{
    int resultado = num1 * num2;

    return resultado;
}

int main()
{
    int n1;
    int n2;
    int retorno;

    printf("Insira o primeiro termo:\n");
    scanf("%d", &n1);

    printf("Insira o segundo termo:\n");
    scanf("%d", &n2);

    if (n1 < n2)
    {
        retorno = soma(n1,n2);
        printf("A soma de %d + %d eh: %d.\n", n1, n2, retorno);
    }

    if (n1 > n2)
    {
        retorno = subtrair(n1,n2);
        printf("A subtracao de %d - %d eh: %d.\n", n1, n2, retorno);
    }

    if (n1 == n2)
    {
        retorno = multiplicar(n1,n2);
        printf("A multiplicacao de %d * %d eh: %d.\n", n1, n2, retorno);
    }

}