#include <stdio.h>

int main() {
    float cel, kel;

    printf("Donner la temperature en Celsius: ");
    scanf("%f", &cel);

    kel = cel + 273.15;

    printf("La temperature en Kelvin: %.2f\n", kel);

    return 0;
}
