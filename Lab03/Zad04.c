#include <stdio.h>

int main() {

  int l = 1;

  printf("Float:\n");

  float a = 1.0;
  while(1.0 + a > 1.0) {
    a = a / 2.0;
    printf("%i. %f => %e\n", l, a, a);
    l++;
  }

  l=1;

  printf("Double:\n");

  double b = 1.0;

  while( 1.0 + b > 1.0) {
    b = b / 2.0;
    printf("%i. %f => %e\n", l, b, b);
    k++;
  }

  l = 1;

  printf("Long double:\n");

  long double c = 1.0;

  while(1.0 + c > 1.0) {
    c = c / 2.0;
    printf("%i. %Lf => %Le\n", l, c, c);
    l++;
  }

}