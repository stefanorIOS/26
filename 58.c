#include <stdio.h>

/*58- Ingresar un texto de caracteres utilizando la función getchar(). Indicar la cantidad de
caracteres, palabras, y líneas que lo forman. Mostrar lo pedido con carteles aclaratorios.
Considerar como separadores de palabras válidos: espacio, tabulador y <enter> y tener
en cuenta que contar palabras no es contar cantidad de separadores.*/

void main(){
    /*
    char c;
    printf("Ingrese un char:");
    c=getchar();
    fflush(stdin);
    printf("Su char es <%c>\n",c);

    if(c=='\n'){printf("Usted ingreso ENTER");}
    else if(c=='\t'){printf("Usted ingreso TAB");}
    else if(c==' '){printf("usted ingreso ESPACIO");}
    */

    //Lo haremos contando separadorres
    char c;
    int cont=0;

    printf("Ingrese un texto, se parara al ingresar 0\n");

    do{
        c=getchar();
        fflush(stdin);
        if(c=='\t'){
            cont+=1;
        }
        else if(c==' '){
            cont+=1;
        }
        else if(c=='\n'){
            cont +=1;
        }

        else if(c=='0'){
            cont +=1;
        }
    }
    while(c!='0');

    printf("Fin del programa - CANTIDAD DE PALABRAS = %d",cont);




}
