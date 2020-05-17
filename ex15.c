#include <stdio.h>

int main()
{
  int n, j, m, cont = 0, i = 0;
  printf("Entre com um numero positivo n: \n");
  scanf("%d", &n);
  printf("Entre com um numero positivo j: \n");
  scanf("%d", &j);
  printf("Entre com um numero positivo m: \n");
  scanf("%d", &m);
  while (n > cont)
  {
    if ((i % m) == (j % m))
    {
      printf("%d\n", i);
      cont++;
    }
    i++;
  }
  return 0;
}