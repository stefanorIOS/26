
#include <stdio.h>

void main(){
    int x;
    char nombre[20];


    for(x=0;x<=2;x++){
        printf("Ingrese su nombre por favor:\n");
        gets(nombre);
        fflush(stdin);
        printf("Su nombre ahora es: <%s>\n",nombre);
    }

    printf("Adios, gracias por jugar.");

}

