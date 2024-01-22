#include <stdio.h>
#include <stdlib.h>

#define cantidad_elementos 10 

int array[cantidad_elementos];//tamaño
int i;

void main ()
{
   for ( i = 0; i <= (cantidad_elementos-1); i++)
   {
        printf("dame un numero: ");
        scanf("%d",&array[i]);
   }

   for (i = 0; i <= (cantidad_elementos-1); i++)
   {
      printf("elemento %d: %d\n",(i+1),array[i]);
   }
   
}