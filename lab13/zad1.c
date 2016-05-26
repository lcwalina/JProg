#include <stdio.h>

int main()
{
    int wiersze, kolumny, x, y;

    printf("Wiersze :\n");
    scanf("%d", &wiersze);
    printf("Kolumny :\n");
    scanf("%d", &kolumny);
    int macierz[wiersze][kolumny], macierz_transponowana[kolumny][wiersze];

    printf("Podaj elementy macierzy\n");

    for (y = 0; y < wiersze; y++)
        for(x = 0; x < kolumny; x++)
            scanf("%d",&macierz[y][x]);

    for (y = 0; y < wiersze; y++)
        for( x = 0 ; x < kolumny ; x++ )
            macierz_transponowana[x][y] = macierz[y][x];

    printf("\nMacierz:\n");
    for (y = 0; y < wiersze; y++)
    {
        for(x = 0; x < kolumny; x++)
        {
            printf("%d ", macierz[y][x]);
        }
        printf("\n");
    }

    printf("\nMacierz transponowana:\n");

    for (y = 0; y < kolumny; y++)
    {
        for (x = 0; x < wiersze; x++)
            printf("%d ",macierz_transponowana[y][x]);
        printf("\n");
    }

    return 0;
}
