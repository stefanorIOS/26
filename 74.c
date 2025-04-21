#include <stdio.h>
#include <string.h>

void main(){
    /* a)
    char cad1[]="Examen";
    char cad2[]="Parcial";
    printf("%s\n", strrev(cad2));
    printf("%d", strlen(cad1));

    //strrev invierte la cadena y la retorna
    //strlen muestra la longitud de la cadena
    */

    char cadena[20];
    strcpy(cadena,"5, 89, 123,2");
    strrev(cadena);
    printf("%s\n", cadena);
    printf ("%c\n", *cadena);

    //No hace falta todavia


}
