/*Hacer un programa que ingrese dos cadenas y:
Determine cuál de ellas es mayor en orden alfabético.
Concatene ambas cadenas.
Determine cuál es la cadena más larga.
Invierta la primera cadena ingresada. */

#include <stdio.h>
#include <string.h>

void main(){

    int cad1[20], cad2[20], aux[20];

    printf("Ingrese dos cadenas\n");
    gets(cad1);
    fflush(stdin);
    gets(cad2);
   // printf("Las cadenas son:%s, y %s",cad1,cad2);

   //Determinar mayor en orden alfabético

   int orden;
   orden=strcmp(cad1,cad2);

   if(orden>0){
    printf("La cadena mayor es: %s\n",cad1);
   }
   else if(orden<0){
    printf("La cadena mayor es: %s\n",cad2);
   }
   else{
    printf("Las cadenas son iguales\n");
   }

   //Concatenacion de ambas cadenas
   strcpy(aux,cad1);
   strcat(aux,cad2);
   printf("La nueva cadena concatenada es: %s\n",aux);

   //Determinar cual es la cadena mas larga
   if(strlen(cad1)>strlen(cad2)){
    printf("La cadena mas larga es: %s\n",cad1);
   }
   else{
    printf("La cadena mas larga es: %s\n",cad2);
   }

   //Invertir la primer cadena ingresada
   strcpy(aux,cad1);
   printf("La cadena: %s invertida es: %s",aux,(strrev(cad1)));



}
