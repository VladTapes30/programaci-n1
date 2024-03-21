#include <stdlib.h>
#include <stdio.h>

#include "fun.h"

int main() {

    fun1();
    printf("\n funcion2 retorno %d",fun2());
    fun3(5,5);
    printf("\n funcion4 retorno %d",fun4(5,8));
    
    while (1);
    return 0;
}
