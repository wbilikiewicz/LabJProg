#include <stdio.h>

#define CZYT(a, b) printf("Podaj wartosc"#a": ") scanf("%"#b; &a);

int main ()
{
  int x;
  double y;
  CZYT(x, i);
  CZYT(y, lf);
}
