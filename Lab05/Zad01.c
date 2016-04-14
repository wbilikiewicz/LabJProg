#include <stdio.h>

void funkcja(int *n, int *k, int *q, int *r)
{
  *q = (*n)/(*k);
  *r = (*n)%(*k);
}

int main()
{
  int n, k, q, r;
  printf("Podaj liczbe\n");
  scanf("%d", &n);
  printf("Podaj dzielnik\n");
  scanf("%d", &k);
  funkcja(&n, &k, &q, &r);
  printf("q= %i\nr= %i\n", q, r);
  return 0;
}
