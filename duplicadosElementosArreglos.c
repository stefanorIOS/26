#include <stdio.h>

/*Contar los elementos duplicados en un arreglo: */


void main(){
    int b = 0;
    int ar[20];
    int tam;
    int cont=0;
    printf("Ingrese el tamaño de su arreglo\n");
    scanf("%d",&tam);
    fflush(stdin);

    printf("Ingrese sus elementos\n");

    for(int x=0;x<tam;x++){
        scanf("%d",&ar[x]);
        fflush(stdin);
    }

    printf("Arreglo cargado -> su arreglo es:\n");

    for(int x=0;x<tam;x++){
        printf("%d  ",ar[x]);
    }

    printf("\nContaremos los elementos duplicados\n");

    for(int x=0; x<tam; x++){

        for(int j=0; j<tam; j++){
                if(ar[x] == ar[j]){
                    b++;
                }
        }

        if(b>1){
            cont++;
        }

        b=0;

    }

    printf("Sus elementos duplicados son: <%d>",cont);







}
