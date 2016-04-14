#include <stdio.h>
int main(){
int a,b,c,d,i,N;

  a = b = c = d = 0;
  // znak przypisania ³¹czy od lewej do prawej zatem wynik = 0

  for (i=0; i<N; a[i++]=i);
  // wynik: 0,1,2,3,4...N

  for (i=0; i<N; a[++i]=i);
  // wynik: 1,2,3,4...N

  i=1; while ((i*=2)<N);
  // wynik: 2, 4, 6, 8

  return 0;
}
