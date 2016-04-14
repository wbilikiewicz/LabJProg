#include <stdio.h>

int main ()
{
  short z;
  int x;
  long a;
  long long b;
  float c;
  double y;
  long double d;
  printf ("short = %d\n", (int) sizeof(z));
  printf ("int = %d\n", (int) sizeof(x));
  printf ("long = %d\n", (int) sizeof(a));
  printf ("long long = %d\n", (int) sizeof(b));
  printf ("float = %d\n", (int) sizeof(c));
  printf ("double = %d\n", (int) sizeof(y));
  printf ("long double = %d\n", (int) sizeof(d));
  return 0;
}
