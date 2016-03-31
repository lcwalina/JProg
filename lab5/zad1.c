#include <stdio.h>

void division(int *n, int *k){
  int q,r;
  q= *n / *k;
  r= *n % *k;
  *n=q;
  *k=r;
}


int main(){
  int n, k,n1,k1;
  printf("Podaj dzielna: ");
  scanf("%d", &n);
  printf("Podaj dzielnik rozny od zera: ");

  scanf("%d", &k);
  while(k==0){
    printf("Nie wolno. Podaj dzielnik rozny od zera: ");
    scanf("%d", &k);
  }

  n1=n; k1=k;
  division(&n,&k);
  printf("%d : %d = %d\n%d %% %d = %d\n",n1,k1,n,n1,k1,k);
  return 0;
}
