#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Entre com o numero n: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            for (k = j + 1; k < i; k++)
            {
                if (i * i == j * j + k * k)
                {
                    printf("O %d gera uma hipotenusa de triagulo retangulo\n", i);
                }
            }
        }
    }
}