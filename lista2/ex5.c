#include <stdio.h>

int main()
{
    int m, n, j, valor = 1;
    printf("Digite o numero m: \n");
    scanf("%d", &m);
    for (n = 1; n < m; n++)
    {
        printf("Sendo n = %d, sua sequencia e: ", n);
        for (j = 0; j < n; j++)
        {
            printf("%d ", valor);
            valor += 2;
        }
        printf("\n");
    }
}