
#include <stdio.h>

void main(){
    int edad;
    printf("Ingrese su edad por favor:\n");
    scanf("%d",&edad);
    fflush(stdin);
    switch(edad){
        case 15:printf("Su edad es <%d>\n",edad);break;
        case 16:printf("Su edad es <%d>\n",edad);break;
        case 17:printf("Su edad es <%d>\n",edad);break;
        //default:printf("Su edad es <%d> y es mayor\n",edad);break;
    }

     printf("Gracias por jugar.");

}
