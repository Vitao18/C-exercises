#include <stdio.h>

int main() {
  int n, i, soma = 0;
  printf("Entre com um número inteiro positivo n: \n");
  scanf("%d", &n);

  for (i = 1; i < n; i++) {
    if ((n % i) == 0) {
      soma += i;
    }
  }
  if (soma == n) {
    printf("O número %d é perfeito!\n", n);
    return 0;
  }
  printf("O número %d não é perfeito!\n", n);
  return 0;
}