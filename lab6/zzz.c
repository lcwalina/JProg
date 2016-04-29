#include<stdio.h>

int main(){
  int a,ile;
  FILE *plik= fopen("zzz2.txt", "r+");
  scanf("%d%d",&ile, &a);
  fseek(plik,ile,SEEK_SET);
  fprintf(plik,"%d", a);
  fseek(plik,0,SEEK_END);
  int pozycja =ftell(plik);
  fseek(plik,0,SEEK_SET);
  char tab[pozycja];

  int i=0;
  while(i<pozycja){
    fscanf(plik, "%c", &tab[i]);
    i++;
  }

  i=0;
  while (i<pozycja){
    printf("%c", tab[i]);
    i++;
  }

  fclose(plik);
}
