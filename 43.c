/*43- De 10 números ingresados indicar cuántos son mayores que cero y cuántos son menores
que cero.

#include <stdio.h>

void main(){

int pos,neg,n;
pos=neg=0;
printf("Usted ingresara 10 numeros\n");

for(int x=0;x<10;x++){
    printf("Ingreso #%d:",x+1);
    scanf("%d",&n);
    fflush(stdin);
    if(n>0){
        pos++;
    }
    else if(n<0){
        neg++;
    }
}

printf("Usted ingreso <%d> positivos y <%d> negativos",pos,neg);

}
*/

