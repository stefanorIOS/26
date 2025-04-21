#include <stdio.h>

void main(){
    int arreglo[9];
    int posicion;

    printf("Llenaremos el arreglo \n");

    for (int x=0; x<=9; x++){

            scanf("%d",&arreglo[x]);
            fflush(stdin);
    }

    printf("Arreglo llenos, elija que posicion quiere ver\n");
    scanf("%d",&posicion);
    fflush(stdin);

    printf("El valor de su posicion <%d>, es : <%d>",posicion,arreglo[posicion-1]);

}
