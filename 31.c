#include <stdio.h>

void main(){
    /*Hacer el algoritmo que nos permita introducir un número por teclado y nos informe si es
    positivo o negativo.

    int numero;
    printf("Ingrese un numero por favor:");
    scanf("%d",&numero);
    if(numero>0){
        printf("El numero es positivo");
    }
    else{
        printf("El numero es negativo");
    }
    */

    /*33 Escribir el algoritmo que me permita leer un número decimal que representa una
        cantidad de grados Celsius y convierta dicho valor a la cantidad equivalente en
        grados Fahrenheit. La salida del programa puede ser de la siguiente forma: 100
        grados Celsius son 212 grados Fahrenheit.

    float numero;
    printf("Introduzca la cantidad de grados Celsius que desea:\n");
    scanf("%f",&numero);
    fflush(stdin);
    printf("La cantidad de grados Fahrenheuit son: <%.1f>", (numero*1.8+32));

    */

    /*34- Diseñar el algoritmo necesario para que habiéndose leído el valor de 2 variables
    NUM1 y NUM2 se intercambien los valores de las variables, es decir que el valor
    que tenía NUM1 ahora lo contenga NUM2 y viceversa.

    int num1,num2,aux;
    printf("Ingrese dos variables <n1yn2> seguidas de un espacio por favor:\n");
    scanf("%d %d",&num1, &num2);
    fflush(stdin);
    aux=num1;
    num1=num2;
    num2=aux;
    printf("Intercambio completado\nLas variables ahora son <%d>, y <%d>",num1,num2);
    */

    /*35- Escribir un enunciado C para conseguir lo siguiente:
    a) Ingresar un texto carácter a carácter hasta que se ingrese ’#’, sin almacenar dicho
    texto.

    char carac;
    printf("Ingrese caracteres, cuando ingrese /#/ terminara\n");

    do{
        carac=getche();
        fflush(stdin);

    }while(carac!='#');
    printf("Programa finalizado por encontrar /#/");
    */
    /*b)  Ingresar un texto carácter a carácter hasta que se active el EOF, sin almacenar dicho
    texto (para activar el EOF utilizar ctrl+Z en entorno windows y ctrl+D en compiladores on
    line).


    char c;
    printf("Ingrese un texto caracter a caracter hasta encontrar EOF");

    do{
        c=getchar();
        fflush(stdin);

    }while(c!=EOF);
    printf("Llego al caracter <EOF = ctrl+Z>");
    */


    /*37a

    La condición a < b > c no funciona como esperas. En C, no se evalúa como dos comparaciones
    separadas. En cambio, se evalúa de izquierda a derecha, lo que significa que:

    a < b se evalúa primero. En tu caso, 3 < 5 es verdadero (1).
    Luego, ese 1 (verdadero) se compara con c en la parte 1 > 4, lo cual es falso (0).
    Entonces, la condición completa es evaluada como falsa y por eso imprime "Incorrecto".

    int a = 3, b = 5, c = 4;
    if (a < b > c) printf ("Correcto");
    else printf ("Incorrecto");
    */

    /* b) da azul en este caso, es facil.
    int a = 10, b = 5;
    (a % b == 0 )? printf("Azul\n"): printf("Rojo\n");*/

   /* c tambien muy facil.
   int a = 10, b= 6;
   char c;
   c = (a%b==0)? 'A' : 'B';
   printf("%c", c);*/

   /* d tambien muy facil.
   char c ;  int i ;   float  f ;
   c = i = f = 'A' + 5 ;
   printf ("%c  %d  %.2f", c, i, f);*/

    /*e bien, aprendimos que 1==x da 1 pues antes declaramos x=1.
    int expresion, x=1;
    expresion =  !((1==x) &&  4);
    if (expresion)
        printf("El resultado de la expresion es  verdadero");
    else
        printf("El resultado de la expresion es falso");
    */

    /* f Sencillo, bien usado printf como expresion compleja para el decremento.

    int x = 4;
    for( ; x < 10; x += 3);
    printf("%d\n",x/2);
    x = 10;
    do {
        printf("%d\n", x--);
    } while (x>5);*/

    /*38- Mostrar una tabla que contenga los valores de peso y costo, variando el peso desde 2
    hasta 20 con un incremento de 6, si el costo mínimo es de $50 y se incrementa en $15 y
    cada 6 kg. Utilizar un bucle for y constantes simbólicas donde se considere útil.


    float costoMin=50;
    int p;
    printf("Mostraremos una tabla <PESO/COSTO>\n");

    for(p=2;p<21;p+=6){
        printf("Peso=<%d>\t",p);
    }

    printf("\n");

    for(p=2;p<21;p+=6){
        printf("Costo=<%.1f>\t",costoMin);
        costoMin+=15;
    }
    */


    /* 41- Ingresar n números y calcular su media.   media = (nromayor + nromenor) / 2.

    int numeros,x,aux;
    int nMayor = nMenor = 0;
    printf("¿ Cuantos numeros quiere ingresar ?");.
    scanf("%d",&numeros);
    fflush(stdin);
    printf("Usted va a hacer <%d> ingresos",numeros);

    for(x=0;x<numeros;x++){
        printf("Ingreso numero <%d>:",x+1);
        scanf("%d",&aux);
        fflush(stdin);
        if(aux>nMayor){
            nMayor = aux;
        }


    }*/



































    }




































