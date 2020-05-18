#include <stdio.h>

int main()
{
    int entrada, anterior = -1, quantidade, contador, tamanho = 0, tamanhoFinal = 0;
    printf("Digite a quantidade de entradas: ");
    scanf("%d", &quantidade);
    for (contador = 0; contador < quantidade; contador++)
    {
        printf("Digite o numero: ");
        scanf("%d", &entrada);
        if (entrada > anterior)
        {
            tamanho += 1;
        }
        else
        {
            if (tamanho > tamanhoFinal)
            {
                tamanhoFinal = tamanho;
                tamanho = 0;
            }
            else
            {
                tamanho = 1;
            }
        }
        anterior = entrada;
    }
    printf("A maior subsequencia crescente e de tamanho: %d", tamanhoFinal);
    return 0;
}