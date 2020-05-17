#include <stdio.h>

int main() {
  int x, n, i, acc = 1;
  printf("Entre com um número inteiro: \n");
  scanf("%d", &x);
  printf("Entre com um número não-negativo: \n");
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    acc *= x;
  }
  printf("O resultado de %d elevado a %d é: %d\n", x, n, acc);
  return 0;
}