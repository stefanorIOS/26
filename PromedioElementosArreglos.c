#include <stdio.h>

void main(){

    int arreglo[5];
    int suma=0;
    int promedio = 0;
    int taman = 0;

    printf("Llene el arreglo de 5 posiciones, por favor\n");

    for(int x=0; x<5; x++){
        scanf("%d",&arreglo[x]);
        fflush(stdin);
        suma = suma + arreglo[x];
    }

    printf("Su suma es de <%d>\n",suma);

    taman = sizeof(arreglo) / sizeof(arreglo[0]);

    promedio = suma / taman;

    printf("El promedio de su arreglo es <%d>", promedio);



}
