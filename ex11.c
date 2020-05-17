#include <stdio.h>

int main() {
  int n, i;
  printf("Entre com um número n maior que zero: \n");
  scanf("%d", &n);
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      printf("O número %d não é primo!\n", n);
      return 0;
    }
  }
  printf("O número %d é primo!\n", n);
  return 0;
}