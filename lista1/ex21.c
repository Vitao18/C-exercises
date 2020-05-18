#include <stdio.h>

int main()
{
    int contador = 0, numeroAnterior, entrada, quantidadeDeEntradas, numeros = 0;

    printf("Digite o numero de entradas: \n");
    scanf("%d", &quantidadeDeEntradas);
    while (quantidadeDeEntradas > contador)
    {
        printf("Entre com o numero:\n");
        scanf("%d", &entrada);
        if (numeroAnterior != entrada)
        {
            numeros += 1;
            numeroAnterior = entrada;
        }
        contador++;
    }
    printf("A quantidade de segmentos e: %d\n", numeros);
    return 0;
}
