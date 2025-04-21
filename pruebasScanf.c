#include <stdio.h>


void main(){
    char n1,n2,n3;
    printf("ingrese 3 char seguido de espacio:\n");
    scanf("%c %c %c", &n1,&n2,&n3);
    fflush(stdin);
    printf("Sus ingresos fueron: <%c> <%c> <%c>",n1,n2,n3);



}
