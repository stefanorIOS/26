#include <stdio.h>

/*53- Dados 3 números donde el primero y el último son límites de un intervalo,
indicar si el tercero pertenece a dicho intervalo.*/

void main(){
    float ni,nf,med;
    ni=nf=med=0;

    printf("Ingrese dos numeros separados de un espacio\n");
    scanf("%f %f",&ni ,&nf);

    printf("Ingrese el tercero y te diremos si pertenece al intervalo\n");
    scanf("%f",&med);

    if(ni>nf && (med<ni&&med>nf)){
       printf("Su valor esta en el medio\n");
    }
    else if(nf>ni && (med<nf && med>ni)){
        printf("Su valor esta en el medio\n");
    }
    else{
        printf("El valor no se encuentra en el medio\n");
    }









}
