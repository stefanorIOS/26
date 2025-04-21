#include <stdio.h>

void main(){
    int arreglo[5];
    int suma=0;

    printf("Ingrese los elementos del arreglo <son 5 posiciones>\n");

    for(int i=0; i<5; i++){
        scanf("%d",&arreglo[i]);
        fflush(stdin);
        suma = suma + arreglo[i];
    }

    printf("Carga completada\nSu suma es igual a:<%d>",suma);





}


