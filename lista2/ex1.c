#include <stdio.h>

int main()
{
    int n, i, j, numero = -1, acc = 0;
    printf("Entre com o numero n: \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        while (numero != 0)
        {
            printf("Digite o numero: \n");
            scanf("%d", &numero);
            if (numero % 2 == 0)
            {
                acc += numero;
            }
        }
        numero = -1;
        acc = 0;
        printf("A soma dos pares e: %d\n", acc);
    }
    return 0;
}