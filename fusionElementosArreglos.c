#include <stdio.h>

void main(){

    int ar1[5];
    int ar2[5];
    int ar3[10];
    int tam;

    printf("Ingrese 2 arreglos de 5 elementos cada uno. Por favor.\n");

    printf("Primer arreglo\n");

    for(int i=0; i<5; i++){
        scanf("%d",&ar1[i]);
        fflush(stdin);
    }

    printf("Segundo arreglo\n");


    for(int i=0; i<5; i++){
        scanf("%d",&ar2[i]);
        fflush(stdin);
    }

    printf("Arreglos llenos\n");

    //cargar ar3

    for(int i=0; i<5; i++){
        ar3[i] = ar1[i];
    }
    for(int i=5; i<10; i++){
        ar3[i] = ar2[i-5];
    }

    //muestro ar3
    printf("Arreglo fusionado\n");

    for(int i=0; i<10; i++){
            printf("<%d> ",ar3[i]);

    }



}
