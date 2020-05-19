// Dados dois naturais m e n determinar, entre todos os pares de números naturais (x,y)
// tais que x < m e y < n, um par para o qual o valor da expressão xy - x2 + y
// seja máximo e calcular também esse máximo.

#include <stdio.h>

int main()
{
    int m, n, x, y, atual, auxx = 0, auxy = 0, valor = 0;
    printf("Entre com o numero m: \n");
    scanf("%d", &m);
    printf("Entre com o numero n: \n");
    scanf("%d", &n);
    for (x = 0; x < m; x++)
    {
        for (y = 0; y < n; y++)
        {
            atual = x * y - x * x + y;
            if ((atual > valor))
            {
                valor = atual;
                auxx = x;
                auxy = y;
            }
        }
    }
    printf("O par x: %d, y: %d gerou o valor maximo de %d", auxx, auxy, valor);
}