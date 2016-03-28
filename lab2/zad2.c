#include <stdio.h>

int main()
{
  int digit=1033225; // zadany przykład
  int day,month,year;
  day=((digit<<27)>>27); 
  month=((digit<<22)>>27); // przesunięcia zerujące bity zarezerwowane dla dnia i roku
  year=(digit>>9);
  printf("Day: %d\nMonth: %d\nYear: %d\n", day,month,year);
  return 0;
}
