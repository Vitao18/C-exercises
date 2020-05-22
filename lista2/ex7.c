//  Dados um inteiro positivo n e uma seqüência de n inteiros positivos,
//  determinar o máximo divisor comum a todos eles.
#include <stdio.h>

int main()
{
    int n, i = 0, r, a, b, aux;
    printf("Digite a quantidade de entradas: \n");
    scanf("%d", &n);

    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);

    for (i = 1; i < n; i++)
    {
        printf("Digite um numero inteiro: \n");
        scanf("%d", &b);

        while (b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
    }
    printf("O mdc dos numeros e: %d", a);
}