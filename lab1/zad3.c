//Napisać programy testujące działanie operatorów z efektami ubocznymi w różnych sytuacjach, od których może zależeć wynik działania.

#include<stdio.h>
int main()
{
  int a,b,c,tab[2];
  a=b=c=0;
  tab[0]=tab[1]=0;
  tab[a++]=10;
  printf("tab[0]=%d\ntab[1]=%d\n",tab[0], tab[1]); // tab[0]==10, tab[1]==0
  a=0;
  tab[0]=tab[1]=0;
  tab[++a]=10;
  printf("tab[0]=%d\ntab[1]=%d\n",tab[0], tab[1]); // tab[0]=0, tab[1]==10

  return 0;
}
