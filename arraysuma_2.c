#include <stdlib.h>
#include <stdio.h>

float suma=0;
int k1,cantidad;

void main ()
{
    
    printf("Introduce la cantidad de números que deseas sumar:\n");
    scanf("%d", &cantidad);
    float datos[cantidad];
    //Leer datos y guardarlos en el arreglo
    for(k1=0; k1<cantidad; k1++)
    {
	    printf("\ningresa el valor %d =", k1);
	    scanf("%f", &datos[k1]);
    }
   
    for(k1=0; k1<cantidad; k1++)
    {
        suma = suma + datos[k1];
    }
    //imprimiendo datos
	printf("\n resultado: %0.2f", suma);
}