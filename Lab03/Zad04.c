/* Eksperymentalnie zbadać ,,ziarno'' w różnych typach rzeczywistych. W tym celu należy wykonać pętlę postaci podobnej do poniższej:
    * x = 1.0;
    * while (1.0+x > 1.0)
    * x = x/2.0;
dla zmiennej x zadeklarowanej kolejno jako float, double i long double. */

#include <stdio.h>

int main() {
  int l = 1, k = 0;
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
