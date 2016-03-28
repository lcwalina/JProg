#include<stdio.h>

#define PO_ILE 4
  // po ile znakow pakowane do jednej liczby

int klucz_odwr(int n) {
    // odszyfrowuje liczbe
  return -n;
}

void druk_paczke(int n) {
    // wydruk wszystkich znakow z paczki
  int i, j, buf[PO_ILE];
  for (i=0; i<PO_ILE; i++) {
    buf[i] = n&255; n >>= 8;
  }
  for (j=PO_ILE-1; j>=0; j--)
    printf("%c", (char)buf[i]);
}

int main () {
  int n, wczyt;
  wczyt = scanf("%i", &n);
  while (wczyt == 1) {
    druk_paczke(klucz_odwr(n));
    wczyt = scanf("%i", &n);
  }
  //  printf("\n");
  return 0;
}
