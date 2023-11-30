#include <stdio.h>

int fatorial(int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }
    else
        return n * fatorial(n - 1);
}

int main()
{
    int numero;
    int retorno;

    printf("Digite o numero para calcular o fatorial dele:\n");
    scanf("%d", &numero);

    retorno = fatorial(numero);

    printf("O fatorial de %d eh: %d", numero, retorno);
}