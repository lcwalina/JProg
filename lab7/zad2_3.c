#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include<time.h>

#define IMIE_MAX 20
#define NAZW_MAX 20
#define IL_OSOB 10000

typedef struct {
    char imie[IMIE_MAX+1];
    char nazwisko[NAZW_MAX+1];
    int pensja;
} osoba;

osoba spis[IL_OSOB];

//=======================================================

void utworz_spis(char *name)
{
    FILE *baza = fopen(name, "r");
    if (baza == NULL)
	printf("\nCOS SIE ZEPSULO!\n\n");
    int i;
    for (i = 0; i < IL_OSOB; i++) {
	fscanf(baza, "%s", spis[i].imie);
	fscanf(baza, "%s", spis[i].nazwisko);
	fscanf(baza, "%i", &spis[i].pensja);
    }
    fclose(baza);
}

//=======================================================


int my_compare(const void *a, const void *b)
{
    osoba *osoba_a  = (osoba *) a;
    osoba *osoba_b  = (osoba *) b;

    if(strcmp(osoba_a->nazwisko, osoba_b->nazwisko)==0)
      return strcmp(osoba_a->imie, osoba_b->imie);
    else
      return strcmp(osoba_a->nazwisko, osoba_b->nazwisko);
}

//=======================================================
void sortuj_qsort()
{
    qsort(spis, IL_OSOB, sizeof(osoba), my_compare);
    FILE *plik = fopen("posortowane1.txt", "w");
    int i;
    for (i = 0; i < IL_OSOB; i++) {
	     fprintf(plik, "%20s	", spis[i].imie);
	     fprintf(plik, "%20s	", spis[i].nazwisko);
	     fprintf(plik, "%20i\n", spis[i].pensja);
    }
    fclose(plik);
}

//=======================================================


void sortuj_bubble()
{
  int i, j;
  char pom[NAZW_MAX+1];
  for(i=1;i<=IL_OSOB;i++)
  {
    for(j=i;j<IL_OSOB;j++)
    {
      if(strcmp(spis[j-1].nazwisko, spis[j].nazwisko)>0)
      {
        strcpy(pom, spis[j-1].nazwisko);
        strcpy(spis[j-1].nazwisko, spis[j].nazwisko);
        strcpy(spis[j].nazwisko, pom);
      }
      else if(strcmp(spis[j-1].nazwisko,spis[j].nazwisko)==0)
      {
        strcpy(pom,spis[j-1].imie);
        strcpy(spis[j-1].imie, spis[j].imie);
        strcpy(spis[j].imie, pom);
      }
    }
  }
  FILE* baza3=fopen("posortowane2.txt","w");
  for(i=0;i<IL_OSOB;i++)
  {
	fprintf(baza3, "%20s	", spis[i].imie);
	fprintf(baza3, "%20s	", spis[i].nazwisko);
	fprintf(baza3, "%20i\n", spis[i].pensja);
  }
  fclose(baza3);
}


//=======================================================

int main (int ile_arg, char* arg[])
{
 if(ile_arg == 2)
 {

  utworz_spis(arg[1]);
  //czas qsorta :
  clock_t  pocz1 = clock();
  sortuj_qsort();
  clock_t  koniec1 = clock();
  printf("\nCzas wykonania qsorta: %lf sek.\n\n",
         (double)(koniec1-pocz1) / CLOCKS_PER_SEC);
  double roznica1;
  roznica1 = (double)(koniec1-pocz1) / CLOCKS_PER_SEC;

  clock_t  pocz2 = clock();
  sortuj_bubble();
  clock_t  koniec2 = clock();
  double roznica2;
  roznica2 = (double)(koniec2-pocz2) / CLOCKS_PER_SEC;
  printf("\nCzas wykonania bubble: %lf sek.\n\n",roznica2);

  printf("|%15s|%15s|\n", "SORTOWANIE", "CZAS");
  printf("|---------------|---------------|\n");
  printf("|%15s|%15le|\n", "QSORT", roznica1);
  printf("|%15s|%15le|\n", "BUBBLESORT", roznica2);
  return 0;
 }
 else
    printf("Wywolanie programu wymaga argumentu!\n");
 return 0;
}
