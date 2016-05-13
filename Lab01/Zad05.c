// Co wydrukuje następujący fragment programu?

#include <stdio.h>

int main() {
  int a=2, b=4;
  if ((a=2) & (b=4))
    printf("TAK\n");
  else
    printf("NIE\n");
}
// program wypisze "NIE"
// program wypisalby "TAK" gdyby występowala koniunkcja - &&
