#include <stdio.h>

/*55- Hacer un algoritmo que muestre el mayor y el menor de una serie de 5 números que
vamos introduciendo por teclado.*/

void main(){

int menor,mayor,ingreso;


printf("Ingrese un numero\n");
menor=mayor=scanf("%d",&ingreso);
fflush(stdin);

for(int x=0;x<4;x++){
    printf("Ingrese un numero\n");
    scanf("%d",&ingreso);
    fflush(stdin);
    if(ingreso<menor){menor=ingreso;}
    else if(ingreso>mayor){mayor=ingreso;}
}
printf("Fin del ingreso\nEl MAYOR es <%d>, el MENOR es <%d>",mayor,menor);



}
