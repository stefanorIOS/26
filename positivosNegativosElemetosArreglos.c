#include <stdio.h>

/*Contar cuántos números negativos y positivos hay en un arreglo:
Pide al usuario que ingrese una serie de números y luego contar cuántos son positivos y cuántos negativos.*/

void main(){
    int arreglo[10];
    int i = 0;
    int pos,neg;
    pos=neg=0;

    printf("Ingrese valores para el arreglo <0 PARA SALIR>\n");

    do{
        scanf("%d", &arreglo[i]);
        fflush(stdin);

        if(arreglo[i]>0){
            pos++;
        }
        else if(arreglo[i]<0){
            neg++;
        }

        i++;

    }
    while(arreglo[i-1]!=0);

    printf("Usted ingrso <%d> POSITIVOS y <%d> NEGATIVOS\n",pos,neg);





}
