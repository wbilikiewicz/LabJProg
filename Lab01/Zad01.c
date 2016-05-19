//Napisac 
// *program w C, który wczytuje liczbę naturalną i przekazuje systemowi operacyjnemu (przez return w main-ie) resztę z dzielenia tej liczby przez 3; 
#include <stdio.h>

int main () {
  int n;
  printf("Podaj liczbe naturalna: \n");
  scanf("%d",&n);
  return n%3;
}
