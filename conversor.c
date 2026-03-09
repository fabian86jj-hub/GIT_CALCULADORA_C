#include <stdio.h>

// Tasas de cambio (puedes actualizarlas)
#define GTQ_TO_USD 0.13
#define GTQ_TO_EUR 0.12
#define USD_TO_GTQ 7.80
#define USD_TO_EUR 0.92
#define EUR_TO_GTQ 8.50
#define EUR_TO_USD 1.09

int main() {
    int opcion;
    float cantidad, resultado;

    printf("=====================================\n");
    printf("     CONVERSOR DE MONEDAS\n");
    printf("=====================================\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Dolares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dolares\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = cantidad * GTQ_TO_USD;
            printf("Resultado: %.2f USD\n", resultado);
            break;
        case 2:
            resultado = cantidad * GTQ_TO_EUR;
            printf("Resultado: %.2f EUR\n", resultado);
            break;
        case 3:
            resultado = cantidad * USD_TO_GTQ;
            printf("Resultado: %.2f GTQ\n", resultado);
            break;
        case 4:
            resultado = cantidad * USD_TO_EUR;
            printf("Resultado: %.2f EUR\n", resultado);
            break;
        case 5:
            resultado = cantidad * EUR_TO_GTQ;
            printf("Resultado: %.2f GTQ\n", resultado);
            break;
        case 6:
            resultado = cantidad * EUR_TO_USD;
            printf("Resultado: %.2f USD\n", resultado);
            break;
        default:
            printf("Opcion no valida.\n");
    }

    printf("\nGracias por usar el conversor.\n");

    return 0;
}