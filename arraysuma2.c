#include <stdlib.h>
#include <stdio.h>

#define cantidad_elementos 5 //cantidad de elementos a sumar

float array[cantidad_elementos];//tamaño
int i;
float sum = 0; 

void main ()
{
   for ( i = 0; i <= (cantidad_elementos-1); i++)
   {
        printf("dame el elemento %d: ",i);
        scanf("%f",&array[i]);
   }

   for ( i = 0; i <= (cantidad_elementos-1); i++)
   {
        sum = sum + array[i];
   }
    
    printf("resultado %f: ",sum);
   
}