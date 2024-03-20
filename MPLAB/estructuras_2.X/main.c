#include<stdio.h>
#include<stdlib.h>

enum weekday
{
        LUNES,
        MARTES,
        MIERCOLES,
        JUEVES,
        VIERNES,
        SABADO,//6
        DOMINGO
};

int main()
{
    enum weekday day;
    
    //day = SABADO;
    day = LUNES;
    switch(day)
    {
        case SABADO:
            printf("es sabado\n");
            break;
        case LUNES:
            printf("ES LUNES\n");
            break;
    }
    while(1);
    return 0;
}
