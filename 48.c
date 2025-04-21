/*48- Codificar en C un programa que muestre los múltiplos de 2 y de 3 y de ambos
comprendidos entre 1 y 100.*/

#include<stdio.h>

void main(){

for(int x=1;x<101;x++){
    if(x%2==0 && x%3==0 && x%6==0){
        printf("%d\n",x);
    }
}

}
