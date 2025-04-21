#include <stdio.h>

int main() {
    int n, num, mayor, menor;

    printf("Ingrese la cantidad de números: ");
    scanf("%d", &n);

    // Inicializamos mayor y menor con valores extremos
    printf("Ingrese un número: ");
    scanf("%d", &num);
    mayor = menor = num;

    // Ingresamos los demás números
    for (int i = 1; i < n; i++) {
        printf("Ingrese un número: ");
        scanf("%d", &num);

        if (num > mayor) {
            mayor = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    // Calculamos la media
    float media = (mayor + menor) / 2.0;
    printf("La media es: %.2f\n", media);

    return 0;
}
