#include <stdio.h>

int main() {
  int n, i, j, cont = 0, atual = 0;
  printf("Entre com um número n maior que zero: \n");
  scanf("%d", &n);
  printf("Entre com um número i maior que zero: \n");
  scanf("%d", &i);
  printf("Entre com um número j maior que zero: \n");
  scanf("%d", &j);
  printf("\n");
  while(n > cont) {
    if ((atual % i == 0) || (atual % j == 0)) {
      cont++;
      printf("%d\n", atual);
    }
    atual++;
  }
  return 0;
}