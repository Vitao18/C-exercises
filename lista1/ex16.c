#include <stdio.h>

int main()
{
    int binario, digito, acc = 0, potencia = 1;
    printf("Insira um numero binario:\n");
    scanf("%d", &binario);
    while (binario != 0)
    {
        digito = binario % 10;
        binario = binario / 10;
        acc += digito * potencia;
        potencia = potencia * 2;
    }
    printf("O numero na base decimal e: %d", acc);
    return 0;
}