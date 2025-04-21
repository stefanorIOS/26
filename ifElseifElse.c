#include <stdio.h>

void main(){
    int valor, numero;
    printf("Por favor ingrese dos valores, separados de un espacio.\n");
    scanf("%d %d",&valor, &numero);
    fflush(stdin);
    if(valor>numero){
        printf("Valor = <%d> es mayor\n",valor);
    }
    else if(valor==numero){
        printf("Valor = <%d> es igual a numero <%d>\n",valor, numero);
    }
    else{
         printf("numero = <%d> es mayor\n",numero);
    }
    printf("Gracias por jugar <>");
}
