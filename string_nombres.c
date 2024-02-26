#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char texto1[] = "luis";
char texto2[] = "metzy";
char texto3[] = "gaby"; 

int log_0;
int log_1;
int log_2;

bool flag; 

char letra_id;

void main()
{
    printf("ingresa un nombre : ");
    scanf("%s",&letra_id);

    	log_0  = strlen(texto1);//strlen de devuelve el tamaño de mi array
        log_1  = strlen(texto2);
        log_2  = strlen(texto3);

    if(letra_id == texto1[0])
    {
        flag = true;
    }
    else if(letra_id == texto2[0])
    {
        flag = true;
    }
    else if(letra_id == texto3[0])
    {
        flag = true;
    }
    else
    {
        flag = false;
    }

    //operador condicional
    (flag == true) ? printf("si existe") : printf("no existe");

    //if(flag) flag = false;
}