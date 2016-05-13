#include <stdio.h>
#define CZYT(x,y) printf("Podaj zmienna %s: ", #x);scanf("%"#y,&x);
int main()
{

  double a;
  CZYT(a, lf);
  printf("\n%lf\n", a);
  return 0;
}
