#include <stdio.h>

/*49- Hacer un algoritmo que muestre todos los números pares que hay desde la unidad hasta
un número que introducimos por teclado. El programa debe poder ejecutarse mientras el
usuario lo requiera.*/

void main(){

    char caracter;
    int n;

    do{
        printf("Hasta que numero quiere que mostremos los pares\n");
        scanf("%d",&n);
        fflush(stdin);

        for(int i=1; i<=n; i++ ){
            if(i%2==0){printf("%d\n",i);}
        }

        printf("0 para Salir - 1 Continuar\n");
        scanf("%c",&caracter);
        fflush(stdin);

    } while(caracter!='0');

    printf("Fin del programa");


}
