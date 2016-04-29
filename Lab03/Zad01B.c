#include <stdio.h>
#include <limits.h>
#include <float.h>

int main ()
{
  short z, Z;
  z = SHRT_MIN;
  Z = SHRT_MAX;
  int x, X;
  x = INT_MIN;
  X = INT_MAX;
  long a, A;
  a = LONG_MIN;
  A = LONG_MAX;
  long long b, B;
  b = LLONG_MIN;
  B = LLONG_MAX;
  float c, C;
  c = FLT_MIN;
  C = FLT_MAX;
  int h = FLT_MAX;
  double y, Y;
  y = DBL_MIN;
  Y = DBL_MAX;
  int i = DBL_MAX;
  long double d, D;
  d = LDBL_MIN;
  D = LDBL_MAX;
  printf ("lowest value short = %i\n", z);
  printf ("highest value short = %i\n", Z);
  printf ("lowest value int = %i\n", x);
  printf ("highest value int = %i\n", X);
  printf ("lowest value long = %li\n", a);
  printf ("highest value long = %li\n", A);
  printf ("lowest value long long = %lli\n", b);
  printf ("highest value long long = %lli\n", B);
  printf ("lowest value float = %1.40f\n", c);
  printf ("highest value float = %1.40f\n", C);
  printf ("rzutowanie = %f\n", h);
  printf ("lowest value double = %lf\n", y);
  printf ("highest value double = %lf\n", Y);
  printf ("rzutowanie = %lf\n", i);
  printf ("lowest value long double = %Lf\n", d);
  printf ("highest value long double = %Lf\n", D);
  return 0;
}
