#include <stdio.h>

int main()
{
    int p, aux, q, potencia = 1;
    printf("Entre com o valor de p:\n");
    scanf("%d", &p);
    aux = p;
    printf("Entre com o valor de q:\n");
    scanf("%d", &q);
    while (p != 0)
    {
        potencia *= 10;
        p /= 10;
    }
    while (q > 0)
    {
        if ((q % potencia) == aux)
        {
            printf("O numero p e subnumero de q\n");
            return 0;
        }
        q /= 10;
    }
    printf("O numero p nao e subnumero de q");
    return 0;
}