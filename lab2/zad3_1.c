#include<stdio.h>

#define PO_ILE 4
  // po ile znakow pakowane do jednej liczby

int klucz(int n) {
    // szyfruje liczbe
  return -n;
}

int pakuj(int buf[PO_ILE]) {
    // pakuje caly bufor do jednej liczby
  int i, pak=0;
  for (i=0; i<PO_ILE; i++)
    pak = (pak<<8)|(buf[i]&255);
  return pak;
}

int main () {
  int i, ile=0;  int buf[PO_ILE];
  buf[ile] = (int)getchar();
  while (buf[ile] != EOF) {
    ile++;
    if (ile == PO_ILE) {
      printf(" %11i\n", klucz(pakuj(buf)));
      ile=0;
    }
    buf[ile] = (int)getchar();
  }
  if (ile > 0) {  // dopelnianie spacjami:
    for (i=ile; i<PO_ILE; i++)  buf[i]=' ';
    printf(" %10i\n", klucz(pakuj(buf)));
  }
  return 0;
}
