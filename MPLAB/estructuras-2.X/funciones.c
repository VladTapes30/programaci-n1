#include <stdbool.h>
bool incripcion_fun (id nombre)
{
    printf("el alumno %c se esta inscribiendo",nombre);
    return true;
}

void pagos_fun (modo m_pago)
{
    switch(m_pago)
    {
        case mesualidad:
            return printf("pagaste tu mensualidad");
            break;
        case cuatrimetre:
            return printf("pagaste tu cuatrimestre");
            break;
        default:
            return printf("error");
            break;
    }
}
