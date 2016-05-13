/* Napisać program, który
    * wczytuje trzy liczby całkowite n, m i k;
    * deklaruje trzy duże tablice rzeczywiste 1-wymiarowe a, b i c;
    * ,,udaje'', że tablice a, b i c są 2-wymiarowe, o wymiarach n×m, m×k i n×k;
    * wczytuje n·m liczb do tablicy a oraz m·k liczb do tablicy b;
    * wykonuje mnożenie macierzowe c=a×b;
    * drukuje wynik w n wierszach po k liczb. */
    
#include <stdio.h>

int main() {
  int n, m, k;
  int i;
  printf("Podaj n: ");
  scanf("%i",&n);
  printf("Podaj m: ");
  scanf("%i",&m);
  printf("Podaj k: ");
  scanf("%i",&k);
  int a[n*m]; //tablica a[n][m]
  int b[m*k]; //tablica b[m][k]
  int c[n*k]; //tablica c[n][k]
  int ko;
  int w;
  printf("Wypelnij tablice a: \n ");
  for(i=0;i<n*m;i++){
    printf("Podaj %i miejsce w tablicy a: ",i);
    scanf("%i",a[i]);
  }
  printf("Wypelnij tablice b: \n ");
  for(i=0;i<m*k;i++){
    printf("Podaj %i miejsce w tablicy b: ",i);
    scanf("%i",b[i]);
  }
  for(ko=0;ko<k;ko++){
    for(w=0;w<n;w++){
      int suma;
      for( ; ; ){	
      // mnozenie 
      }
    c[ko*k+w] = suma;
    }
  }
  printf("\ndone\n");
}
