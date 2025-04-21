#include <stdio.h>

/*51- Codificar en C un algoritmo que permita ingresar 10 números, ninguno de ellos igual a
cero. Se pide sumar los positivos, obtener el producto de los negativos y luego mostrar
ambos resultados.*/

void main(){
    int pos,neg,n;
    pos=0;
    neg=1;

    for(int i=0; i<10; i++){
        printf("Ingrese un numero\n");
        scanf("%d",&n);

        if(n>0){pos=pos+n;}
        else if(n<0){neg=neg*n;}
        else{break;}


    }
    printf("Suma = <%d>\nMultiplic = <%d>",pos,neg);
    printf("Fin del programa");





}
