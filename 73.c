/*Se dispone de dos cadenas de caracteres cad1 y cad2
y se ejecutan las siguientes funciones:
• strcpy (cad1, “ANTONIO”);
• strcpy (cad2, “ANTENA”); */

#include <stdio.h>
#include <string.h>

void main(){
    char cad1[20],cad2[20];
    strcpy(cad1,"ANTONIO");
    strcpy(cad2,"ANTENA");

    //printf("La cadena 1 es: %s y la cadena 2 es: %s\n",cad1,cad2);

    printf("%d",strcmp(cad1,cad2));

}
