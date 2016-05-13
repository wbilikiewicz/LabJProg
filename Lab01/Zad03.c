/*Napisać programy testujące działanie operatorów z efektami ubocznymi w różnych sytuacjach, od których może zależeć wynik działania. Np.
  *a[i++] = 0;   oraz   a[++i] = 0;
  *y = (x += 2);
  *z = (x %= 3) + (x %= 4);*/

#include <stdio.h>

int main(){
  int a1[5] = {1,1,1,1,1};
  int a2[5] = {1,1,1,1,1};
  int i = 0, j = 0;
  a1[i++] = 0;
  for(j = 0; j < 5; j++){
    printf("%d", a1[j]);
  }
  printf ("\n");
  a2[i++] = 0;
  j = 0; i = 0;
  for(j = 0; j < 5; j++){
    printf("%d", a2[j]);
  }
  printf ("\n");
  
  int y, x;
  printf("y=(x += 2)\n");
  printf("Podaj x: ");
  scanf("%d", &x);
  y=(x += 2);
  printf("Wynik: %d\n", y);

  int z, c;
  printf("z = (c %%= 3) + (c  %%= 4)\n");
  printf("Podaj c: ");
  scanf("%d", &c);
  z = (c % 3) + (c % 4);
  printf("Wynik: %d\n", z);
}
