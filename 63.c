/* Escribir un programa que permita el ingreso de 1000 números,
los almacene en un arreglo, luego ingrese otro número
y determine entre los anteriores cuales son mayores o iguales al último
 número ingresado. Con los mayores calcular su sumatoria y
mostrar:LA SUMATORIA DE LOS NÚMEROS MAYORES QUE nro_ingresado ES sumatoria.*/

#include <stdio.h>

void main(){
    int numeros[10];
    int n,sumatoria;
    sumatoria=0;

    //ingreso
    for(int x=0; x<10; x++){
        printf("Ingrese un numero\n");
        scanf("%d",&numeros[x]);
        fflush(stdin);
    }
    printf("Ingreso exitoso\n");

    printf("Ingrese otro numero para comparar");
    scanf("%d",&n);
    fflush(stdin);

    //hago la comparacion y sumatoria

    for(int x=0; x<10; x++){
        if(numeros[x]>=n){
            sumatoria=sumatoria+numeros[x];
        }
    }

    printf("La sumatoria de los numeros mayores o iguales a %d es %d",n,sumatoria);


}
