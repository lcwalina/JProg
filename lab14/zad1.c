#include<stdio.h>

int main() {
  char* rzym[] = { "I", "IV", "V", "IX", "X","XL", "L", "XC", "C", "CD","D", "CM", "M" };
  int arab[] = { 1, 4, 5, 9, 10,40, 50, 90, 100, 400,500, 900, 1000 };
  int  i, liczba;

  do {
    printf("\n  Liczba calkowita wieksza od 0: ");
    scanf("%i", &liczba);
  }  while (liczba <= 0);

  printf("  Rzymski odpowiednik: ");
  for (i=12; i>=0; i--) {
    while (liczba >= arab[i]) {
      printf("%s", rzym[i]); liczba -= arab[i];
    }
  }

  printf("\n\n");
  return 0;
}
