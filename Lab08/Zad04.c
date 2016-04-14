#include <stdio.h>

#define PETLA(komenda1, warunek, komenda2) \
komenda1; while(warunek){komenda2; komenda1; }

int main(){
char a [DUZO], x;
int n = 0, i = 0;
PETLA (x = getchar(), x != EOF, a[n] = x; n++);
for (i = 0; i < n; i++);
printf("%c\n", a[i]);
}
