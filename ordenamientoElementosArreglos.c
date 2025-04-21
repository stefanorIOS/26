#include <stdio.h>

void main(){
    int arreglo[10];
    int temp=0;

    printf("Ingresa las 10 posiciones del arreglo\n");

    for (int i=0; i<10; i++){
        scanf("%d",&arreglo[i]);
        fflush(stdin);
    }

    printf("Arreglo cargado exitosamente\n");

     for (int i=0; i<10; i++){
       printf("%d\t",arreglo[i]);
    }

    for (int i = 0; i < 10-1; i++) {
        for (int j = 0; j < 10-i-1; j++) {
             if (arreglo[j] > arreglo[j+1]) {

                temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }
    }

     printf("\nArreglo ordenado exitosamente ASCENDENTE\n");

      for (int i=0; i<10; i++){
       printf("%d\t",arreglo[i]);
    }

    for (int i = 0; i < 10-1; i++) {
        for (int j = 0; j < 10-i-1; j++) {
             if (arreglo[j] < arreglo[j+1]) {

                temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }
    }

    printf("\nArreglo ordenado exitosamente DESCENDENTE\n");

      for (int i=0; i<10; i++){
       printf("%d\t",arreglo[i]);
    }





}
