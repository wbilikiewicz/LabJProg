// Napisać program, który wczytuje tekst aż do EOF, a następnie drukuje bitowe obrazy wczytanych znaków. 

#include <stdio.h>

int main () {
  char znak;
  int c = 0;
  int k, i;
  while ((znak = getchar()) != EOF) {
    c = (int) znak;
    printf ("%c%d\n", znak, c);
    for (i = 7; i >= 0; i--) {
      k = c >> i;
      if(k&1) {
        printf ("1");
      }
      else {
        printf ("0");
      }
    }
    printf("\n");
  }
}
