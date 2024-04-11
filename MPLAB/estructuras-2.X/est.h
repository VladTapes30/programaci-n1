/* 
 * File:   est.h
 * Author: achem
 *
 * Created on 10 de abril de 2024, 12:14 PM
 */

#ifndef EST_H
#define	EST_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdbool.h>
typedef struct
{
    bool *inscripcion (id nombre);
    void *pagos (modo m_pago);
}alumno;

typedef struct
{
   int matricula;
   char nombre[];//array
}id;


#ifdef	__cplusplus
}
#endif

#endif	/* EST_H */

