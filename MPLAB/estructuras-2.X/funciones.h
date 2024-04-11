/* 
 * File:   funciones.h
 * Author: achem
 *
 * Created on 10 de abril de 2024, 12:16 PM
 */

#ifndef FUNCIONES_H
#define	FUNCIONES_H

#ifdef	__cplusplus
extern "C" {
#endif

    typedef enum
    {
        mesualidad,
                cuatrimetre
    }modo;

/*prototipos*/
    bool incripcion_fun (id nombre);
    void pagos_fun (modo m_pago);
#ifdef	__cplusplus
}
#endif

#endif	/* FUNCIONES_H */

