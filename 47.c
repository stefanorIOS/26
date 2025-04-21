/*47- Hacer el algoritmo que muestre los números pares entre el 1 y el 100 a razón de 6 por
línea separados por 3 blancos.*/

#include <stdio.h>

void main(){

int cont=0;
printf("Numero pares\n");

for(int x=1;x<101;x++){

   if(x%2==0 && cont<6){
        printf("%d\t",x);
   cont+=1;
   }

   else if (x%2==0 && cont>=6){
    cont=1;
    printf("\n");
    printf("%d\t",x);

   }



}


}

