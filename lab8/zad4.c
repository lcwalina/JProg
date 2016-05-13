#include <stdio.h>
#define PETLA(komenda1, warunek, komenda2) komenda1; while(warunek){komenda2; komenda1; }

int main(){
  int a=0, b=0, c=0;
  PETLA(a++, c<5, b++; c++);
  printf("%i\n", a);
  printf("%i\n", b);
}
