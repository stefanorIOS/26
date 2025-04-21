#include <stdio.h>

void main(){
    char caracter;

    do{
        printf("Ingrese caracter:");
        caracter=getchar();
        fflush(stdin);
    }
    while(caracter!='8');
    printf("Programa finalizado\nSu caracter se ve asi <%c>",caracter);
}
