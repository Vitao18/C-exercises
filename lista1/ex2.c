// Entrada: um número n maior que 0
// Saída: A soma de de todos números entre 0 até n

#include <stdio.h>

int main() {
  int numero, soma = 0, i;
  printf("Entre com um número positivo maior que zero: \n");
  scanf("%d", &numero);
  for (i = 0; i <= numero; i++) {
    soma += i;
  }
  printf("A soma dos %d primeiros números é: %d\n", numero, soma);
  return 0;
}