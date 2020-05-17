// Entrada: 1 2 3 0
// Saida: 1^2 2^2 3^2
#include <stdio.h>

int main() {
  int numero;
  int quadrado;
  printf("Entre com um número diferente de 0: \n");
  scanf("%d", &numero);
  while(numero != 0) {
    quadrado = numero * numero;
    printf("O quadrado de %d é: %d\n", numero, quadrado);
    printf("Entre com um número diferente de 0: \n");
    scanf("%d", &numero);
  }
  return 0;
}