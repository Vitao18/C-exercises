//decimal
//binario
#include <stdio.h>

int main()
{
    int binario = 0, decimal, digito, potencia = 1;
    printf("Entre com um numero decimal:\n");
    scanf("%d", &decimal);
    while (decimal > 0)
    {
        digito = decimal % 2;
        binario += digito * potencia;
        potencia *= 10;
        decimal = decimal / 2;
    }
    printf("o numero em binario e: %d", binario);
    return 0;
}