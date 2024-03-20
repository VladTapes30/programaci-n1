#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numero,i;
    int contador = 0;
    printf("ingrese un mumero:\n");
    scanf("%d",&numero);

    for(i=1; i <= numero; i++)
    {
        if((numero % i) == 0)
        {contador++;}
    }
    if (contador > 2)
    {
        printf("el numero %d no es primo",numero);
    } 
    else
    {
        printf("el numero %d es primo", numero);
    }
    return 0;
}

    