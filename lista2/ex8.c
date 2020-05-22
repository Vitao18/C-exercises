// Dado n > 1 e uma seqüência com n inteiros, verificar se existe um inteiro k > 1
// tal que a seqüência é k-alternante. Dê como saída também o valor de k caso a seqüência seja alternante.
// Entrada: tamanho da sequência, numeros da sequência.

// 1, 3, 2, 4, 5, 7, 6, 8 => verificar se o n+1 é do mesmo tipo,
// n, n+1, ..., se não for, apagar o indicador, ou continuar a contagem?
#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main()
{

    int n, i, entrada = 0, contadorImpar = 0, contadorPar = 0, par;
    printf("Digite a quantidade de numeros: \n");
    scanf("%d", &n);

    printf("Digite o numero da sequencia: \n");
    scanf("%d", &entrada);

    if (entrada % 2 == 0)
    {
        par = TRUE;
    }
    else
    {
        par = FALSE
    }
    for (i = 0; i < n - 1; i++)
    {
        }

    // for (i = 0; i < n; i++)
    // {
    //     printf("Digite o numero da sequencia: \n");
    //     scanf("%d", &entrada);
    //     if ((entrada % 2) == 0)
    //     {
    //         contadorPar += 1;
    //     }
    //     else
    //     {
    //         contadorImpar += 1;
    //     }
    // }
    // if (contadorImpar != 0 && contadorPar != 0)
    // {
    //     printf("os numeros tem impares e pares");
    // }
    // else if (contadorImpar != 0)
    // {
    //     printf("A sequencia eh %d K", contadorImpar);
    // }
    // else
    // {
    //     printf("A sequencia eh %d K", contadorPar);
    // }
}