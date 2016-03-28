#include <stdio.h>

void bit(int);

int main()
{
  char c;
  while(c!=EOF)
  {
    if(c!='\n') bit(c);
    c=getchar();
  }
  return 0;
}
void bit(int c)
{
  int tab[7];

  int i;
  for(i=0; c!=0; i++)
  {
    tab[i]=c%2;
    c=c/2;
  }
  while(i>0)
  {
    i--;
    printf("%i", tab[i]);
  }
  printf("\n");
}
