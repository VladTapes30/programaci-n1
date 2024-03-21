/*funcion si parametros y sin retorno de valores*/
void fun1()
{
    printf("funcion sin retorno y parametros en ejecucion");
}

/*sin parametros con retorno de valor*/
int fun2()
{
    return 5+5;
}
/*gcc -o (nombre del ejecutable) (nombre de cada archivo)*/

/*con parametros y sin retorno de valor*/
void fun3(int a,int b)
{
     printf("el valor es:%d",(a + b));
}
/*con parametros y retorno de valor*/

int fun4 (int a, int b)
{
    return a + b;
}
