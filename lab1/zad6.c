#include<stdio.h>

int main()
{
//  a = b = c = d = 0; //operacja wielokrotnego przypisania, kompilator maszeruje w prawo do napotkania jakiejś wartości - wówczas przypisuje ją wszystkim zmiennym, w tym przypadku jest to "0"

  int i, a[2];
  for (i=0; i<2; a[i++]=i);  // zapełnienie tablicy liczbami o 1 większym od indeksu tablicy
  printf("%d\n", a[0]);

  //for (i=0; i<2; a[++i]=i); // "Przerwane (zrzut pamięci)"

  i=1; while ((i*=2)<31); // drukowana jest liczba, która jest najmniejszą potęgą dwójki większą od zadanego 'N'
  printf("%d\n", i);
  return 0;
  }
