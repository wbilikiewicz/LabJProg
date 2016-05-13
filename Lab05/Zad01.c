/* Napisać funkcję typu void, która ma
  * dwa całkowite parametry wejściowe n i k, k≠0,
  * dwa całkowite parametry wyjściowe:
    * q równy ilorazowi całkowitemu n przez k, oraz
    * r równy reszcie z dzielenia n przez k. 
Ta funkcja nie może mieć żadnych innych parametrów, nie może odwoływać się do zmiennych globalnych i oczywiście nie może niczego czytać ani pisać -- jej jedyna komunikacja z resztą programu odbywa się przez parametry.
Napisać program, który wczytuje dwie liczby całkowite i wywołuje powyższą funkcję, a następnie drukuje iloraz całkowity oraz resztę z dzielenia wczytanych liczb. */

#include <stdio.h>

void funkcja(int *n, int *k, int *q, int *r) {
  *q = (*n)/(*k);
  *r = (*n)%(*k);
}

int main() {
  int n, k, q, r;
  printf("Podaj liczbe\n");
  scanf("%d", &n);
  printf("Podaj dzielnik\n");
  scanf("%d", &k);
  funkcja(&n, &k, &q, &r);
  printf("q= %i\nr= %i\n", q, r);
}
