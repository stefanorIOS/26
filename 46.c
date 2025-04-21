#include <stdio.h>

/*46- Realizar un algoritmo que permita ingresar un número correspondiente a los días de una
semana y muestre el nombre del día. Que se permita trabajar hasta que el usuario indique
lo contrario.*/

void main(){
    char c;

    printf("Ingrese numeros del 1 - 7\nNostros le diremos que dia es\nPulse 0 para terminar\n");

    do{
        c=getchar();
        if(c=='1'){printf("DOMINGO\n");}
        else if(c=='2'){printf("LUNES\n");}
        else if(c=='3'){printf("MARTES\n");}
        else if(c=='4'){printf("MIERCOLES\n");}
        else if(c=='5'){printf("JUEVES\n");}
        else if(c=='6'){printf("VIERNES\n");}
        else if(c=='7'){printf("SABADO\n");}
    }
    while(c!='0');
    printf("PROGRAMA FINALIZADO");

}
