// Dado um número inteiro positivo, determine a sua decomposição em fatores primos
// calculando também a multiplicidade de cada fator.

#include <stdio.h>

int main()
{
    int num, cont = 2, j;
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &num);
    //Dividir o numero, com o menor divisor o possível em que o mod me retorne 0, n vezes até chegar em 1.
    // 77 / 7 => 11 / 11 => 1, decomposição em numeros primos == (7, 11).
    // 25 / 5 => 5 / 5 => 1, decomposição em numeros primos == (5, 5).
    printf("A sequencia de fatores primos e: \n");
    while (num > 1)
    {
        if (num % cont == 0)
        {
            num /= cont;
            printf("%d ", cont);
            cont = 2;
        }
        else
        {
            cont++;
        }
    }
}