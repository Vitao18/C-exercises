#include <stdio.h>

int main() {
  int n, cont;
  printf("Entre com um número n maior que zero: \n");
  scanf("%d", &n);
  for (cont = 0; (cont * (cont + 1) * (cont + 2)) <= n; cont++) {
    if (cont * (cont + 1) * (cont + 2) == n) {
        printf("O número %d é triangular!!!\n", n);
        return 0;
    }
  }
  printf("O número %d não é triangular :/\n", n);
  return 0;
}