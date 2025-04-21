/* Escribir un programa que ingrese una cadena,
cuente cuántos de sus elementos son dígitos, cuántos de ellos
son blancos y muestre:
LA CANTIDAD DE DÍGITOS QUE APARECEN EN cadena ES cant_digitos
Y LA CANTIDAD DE BLANCOS ES cant_blanco */

#include <stdio.h>
#include <string.h>

void main(){
    char cadena[40];
    int tam;
    int car,blan;
    car=blan=0;

    printf("Ingrese una cadena\n");
    gets(cadena);
    fflush(stdin);
    printf("Su cadena es la siguiente:%s\n",cadena);
    tam = strlen(cadena);
    printf("El tamano de tu cadena es %d\n",tam);

    //lo recorro y cuento espacios en blanco y caracteres
    for(int x=0; x<tam; x++){
        if(cadena[x]!=' '){
            car++;
        }
        else{
            blan++;
        }
    }

    printf("Cantidad de caracteres = %d y cantidad de espacios = %d\n",car,blan);



}
