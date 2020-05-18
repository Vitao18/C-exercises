// Entrada: um inteiro n maior que zero
// Saída: uma lista 1 3 5 ... n de números maiores que zero

#include <stdio.h>

int main() {
  int numero, i, acc = 1;
  printf("Entre com um número maior que zero: \n");
  scanf("%d", &numero);
  for (i = 0; i < numero; i++) {
    printf("%d\n", acc);
    acc += 2;
  }
  return 0;
}