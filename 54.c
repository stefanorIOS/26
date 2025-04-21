#include <stdio.h>


/*54- Realizar la tabla de multiplicar de un número entre 0 y 10 de forma que se visualice de la
siguiente forma:
4x1= 4
4x2= 8
*/


void main(){
    int n;

    printf("Ingrese un numero entre 0 y 10\n:");
    scanf("%d",&n);
    fflush(stdin);

    printf("La tabla de <%d> es:\n",n);

    for(int i=1; i<11; i++){

            printf("%dx%d=%d\n",n,i,(n*i));

    }

    printf("Fin del programa");
}
