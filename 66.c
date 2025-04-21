/* Escribir un programa que ingrese 10 números enteros, los cargue
en un arreglo unidimensional, busque el mayor de ellos,
calcule el promedio y muestre:
LOS NÚMEROS INGRESADOS SON :
EL MAYOR DE ELLOS ES:
SU PROMEDIO ES : */

#include <stdio.h>

void main(){
    int numeros[5];
    int may;
    int suma,prom,tam;
    suma=prom=tam=0;

    //carga de elementos
    printf("Ingrese 5 numeros\n");

    for(int x=0; x<5; x++){
        scanf("%d",&numeros[x]);
        fflush(stdin);
    }

    //Mostrar los numeros ingresados
    printf("Los numeros ingresados son:\n");
    for(int x=0; x<5; x++){
        printf("%d\n",numeros[x]);
    }

    //Busqueda del mayor
    may=numeros[0];

    for(int x=0; x<5; x++){
        if(numeros[x]>may){
            may=numeros[x];
        }
    }

    printf("El numero mayor es %d\n",may);

    //promedio->sumatoria/tamaño
    for(int x=0; x<5; x++){
        suma=suma+numeros[x];
    }

    tam = sizeof(numeros)/sizeof(numeros[0]);

    prom = suma/tam;

    printf("La sumatoria es de %d y el tamaño del arreglo es %d\nPor lo cual el promedio es %d",suma,tam,prom);







}
