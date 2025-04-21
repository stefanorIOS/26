#include <stdio.h>

/*45- Codificar en C un programa que lea 20 caracteres indique cuántas "a" se ingresaron,
cuantas "e, i, o, u".*/

void main(){
    char c;
    int ca,ce,ci,co,cu;
    ca=ce=ci=co=cu=0;

    printf("Usted debera ingresar 20 caracteres\n");

    for (int x = 0;x<20;x++){
        c=getchar();
        fflush(stdin);

        if(c=='a'){ca+=1;}
        else if(c=='e'){ce+=1;}
        else if(c=='o'){co+=1;}
        else if(c=='i'){ci+=1;}
        else if(c=='u'){cu+=1;}
    }
    printf("a=<%d>\ne=<%d>\ni=<%d>\no=<%d>\nu=<%d>",ca,ce,ci,co,cu);



}
