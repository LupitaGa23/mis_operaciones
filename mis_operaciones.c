#include <stdio.h>
#include <stdlib.h>
#include "suma.h"
#include "resta.h"
#include "potencia.h"
#include "logaritmo.h"

void pedir_numeros(double *a, double *b) {
    printf("Introduce el primer número: ");
    scanf("%lf", a);
    printf("Introduce el segundo número: ");
    scanf("%lf", b);
}

int main() {
    int opcion;
    double a, b, resultado;

    while (1) {
        printf("\nElige una operación:\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Potencia\n");
        printf("4. Logaritmo Natural del primer número\n");
        printf("5. Salir\n");
        printf("Opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                pedir_numeros(&a, &b);
                resultado = sumar(a, b);
                printf("Resultado: %lf\n", resultado);
                break;
            case 2:
                pedir_numeros(&a, &b);
                resultado = restar(a, b);
                printf("Resultado: %lf\n", resultado);
                break;
            case 3:
                pedir_numeros(&a, &b);
                resultado = potencia(a, b);
                printf("Resultado: %lf\n", resultado);
                break;
            case 4:
                printf("Introduce el número: ");
                scanf("%lf", &a);
                resultado = logaritmo_natural(a);
                printf("Resultado: %lf\n", resultado);
                break;
            case 5:
                exit(0);
            default:
                printf("Opción no válida\n");
        }
    }

    return 0;
}
