#include <stdio.h>

void main(){
    int arreglo[5];
    int max,min;
    max=min=0;

    printf("Ingresa 5 numeros, por favor\n");

    scanf("%d",&arreglo[0]);
    fflush(stdin);

    max=min=arreglo[0];

    for(int x=1; x<5; x++){
        scanf("%d",&arreglo[x]);
        fflush(stdin);

        if(arreglo[x]>max){
            max=arreglo[x];
        }
        else if(arreglo[x]<min){
            min=arreglo[x];
        }
    }

    printf("El mayor numero fue: <%d> y el menor numero fue: <%d>", max,min);





}
