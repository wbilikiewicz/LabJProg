#include <stdio.h>
#include <limits.h>
#include <float.h>

int main ()
{
  short z = 200*200;
  int x = 49000*49000;
  long a = 20000000000*3000000000;
  long long b = 20000000000*3000000000;
  float c = 0.3;
  double y = 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1;
  long double d =
  printf ("wynik = %i\n", z);
  printf ("wynik = %i\n", x);
  printf ("wynik = %li\n", a);
  printf ("wynik = %lli\n", b);
  printf ("wynik = %f\n", c);
  printf ("wynik = %lf\n", y);
  printf ("wynik = %Lf\n", d);
  return 0;
}

/*double i;
  for(i = 0; i != 1; i = i+0.1)
  {
  if(i<3)
  printf("Dziala.. %lf\n", i);
  return 0;
}*/
