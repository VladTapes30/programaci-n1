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
int log_variable;

int flag1 = 1;
int flag2 = 1;
int flag3 = 1; 

char letra_id[]="metzy";

int main()
{
   /* printf("ingresa un nombre : ");
    scanf("%s",&letra_id[0]);*/

    	log_0  = strlen(texto1);//strlen de devuelve el tamaño de mi array
        log_1  = strlen(texto2);
        log_2  = strlen(texto3);

        log_variable = strlen(letra_id);

    /*if (log_0 == log_variable)
    {
        flag = (strcmp (texto1,letra_id));
        /*int strcmp(const char *cadena1, const char *cadena2);
        Compara cadena1 y cadena2. Si son iguales, devuelve 0. Un número negativo si cadena1 "va" antes que cadena2, y un número positivo si es al contrario:

        < 0    si    cadena1 < cadena2
        ==0    si    cadena1 == cadena2
        > 0    si    cadena1 > cadena2*/
    /*}
    else flag = 1;

    if (log_1 == log_variable)
    {
        flag = (strcmp (texto2,letra_id));
    }
    else flag = 1;

    if (log_2 == log_variable)
    {
        flag = (strcmp (texto3,letra_id));
    }
    else flag = 1;*/
    flag1 = (strcmp (texto1,letra_id));
    flag2 = (strcmp (texto2,letra_id));
    flag3 = (strcmp (texto3,letra_id));


    //operador condicional
    (flag1 == 0) ? printf("si existe\n") : printf("no existe\n");
    (flag2 == 0) ? printf("si existe\n") : printf("no existe\n");
    (flag3 == 0) ? printf("si existe\n") : printf("no existe\n");

    //if(flag) flag = false;
    return 0;
}