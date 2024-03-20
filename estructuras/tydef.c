#include <stdio.h>    //<> --- include 
#include <stdlib.h>   //"" --- incluir archivos que esten en la misma carpeta

typedef struct cuadrado
{
    float _lado;
}cu;

typedef struct triangulo
{
    float _base ;
    float altura;
}tr;

typedef struct cilindro
{
    float altura;
    float area_c;
}ci;
float areaCuadrado;
float areaTriangulo;
float volCilindro;

int main()
{

    cu cu;
    tr tri;
    ci cil;
    /*inicializar las variables*/
    cu._lado   = 5;
    tri.altura = 5;
    tri._base  = 8;
    cil.altura = 9;
    cil.area_c = 10;

    areaCuadrado  = cu._lado * cu._lado;
    areaTriangulo = (tri._base * tri.altura) / 2;
    volCilindro   = cil.altura * cil.area_c;

    printf("resultado es %0.2f\n",areaCuadrado);
    printf("resultado es %0.2f\n",areaTriangulo);
    printf("resultado es %0.2f\n",volCilindro);

 return 0;

}
