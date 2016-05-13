/* Napisać program, który
    * wczytuje dwie liczby całkowite n i k;
    * deklaruje dwie tablice rzeczywiste 1-wymiarowe a i b o długości n·k;
    * ,,udaje'', że obie tablice są 2-wymiarowe -- że tablica a jest 2-wymiarowa n×k, i że tablica b jest 2-wymiarowa k×n;
    * wczytuje n·k liczb do tablicy a;
    * wykonuje transpozycję macierzy a do tablicy b;
    * drukuje tablicę b w k wierszach po n liczb. */
    
#include <stdio.h>
int main(){
  int n, k;
  printf("Podaj ilosc wierszy: \n");
  scanf("%i",&n);
  printf("Podaj ilosc kolumn: \n");
  scanf("%i",&k);
  int a[n*k]; // tablica n x k
  int b[k*n]; // tablica k x n
  int iloczyn = n*k; // ilosc pol w tablicy
  int i; // obrotomierz do wypelniania
  int w; // obrotomierz wierszy
  int ko; // obrotomierz kolumn
  printf("Wypelnianie tablicy %i x %i \n",n,k);
  for(i=0;i<iloczyn;i++){
    printf("Podaj %i miejsce w tablicy: ",i);
    scanf("%i",&a[i]);
   }
  printf("\nWyswietlanie wypelnionej tablicy: \n");
  for(ko=0;ko<k;ko++){
    for(w=0;w<n;w++){
      printf("%i ",a[ko*k+w]);
    }
    printf("\n");
  }
  printf("Transpozycja... \n");
  for(w=0;w<n;w++){
    for(ko=0;ko<k;ko++){
      b[w*k+ko] = a[ko*k+w];
    }
  }
  printf("Wyswietlanie tablicy stransponowanej: \n");
  for(ko=0;ko<k;ko++){
    for(w=0;w<n;w++){
      printf("%i ",b[ko*k+w]);
    }
  printf("\n");
  }
printf("\n\ndone\n\n");
}
