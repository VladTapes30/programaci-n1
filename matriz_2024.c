#include <stdlib.h>
#include <stdio.h>

//////////////directivas//////////////////
#define fila_matriz 3
#define col_matriz  3

/////////////declaraciones//////////////////
float matriz_a [fila_matriz] [col_matriz];
int h0,h1;

void main()
{
   for (h0 = 0; h0 <= (fila_matriz-1); h0++)
   {
        for (h1 = 0; h1 <= (col_matriz-1); h1++)
        {
            printf("dame el elemento fila %d columna %d:",h0,h1);
            scanf("%f",&matriz_a[h0][h1]);
        }
   }

    for (h0 = 0; h0 <= (fila_matriz-1); h0++)
   {
        for (h1 = 0; h1 <= (col_matriz-1); h1++)
        {
            printf("%0.2f\t",matriz_a[h0][h1]);
        }
        printf("\n");
   }
}