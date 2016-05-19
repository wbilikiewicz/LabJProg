/*Sprawdzić i wyjaśnić działanie następujących fragmentów programów:
    * a = b = c = d = 0;
    * for (i=0; i<N; a[i++]=i);
    * for (i=0; i<N; a[++i]=i);
    * i=1; while ((i*=2)<N); */
      
#include <stdio.h>

int main(){
int a,b,c,d,i = 0,N = 5;
int tab[5] = {0,1,2,3,4};

  a = b = c = d = 0;
  printf("%d %d %d %d \n", a, b, c, d);
  // znak przypisania łączy od lewej do prawej zatem wynik = 0
  
  for (i=0; i<N; tab[i++]=i)
    printf("%d ", tab[i]);
  // wynik: 0,1,2,3,4...N
	printf("\n");
	
  for (i=0; i<N; tab[++i]=i)
    printf("%d ", tab[i]);
  // wynik: 1,2,3,4...N
	printf("\n");
	
  i=1;
  while ((i*=2)<N)
    printf(" %d ", i);
  // dopóki i < N, i jest mnożone razy 2 i drukowane na ekran
  // wynik: 2, 4
}

