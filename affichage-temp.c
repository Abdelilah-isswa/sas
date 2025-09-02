#include <stdio.h>

int main() {
    float temp;

    printf("Donner la temperature: ");
    scanf("%f", &temp);

    if (temp < 0) {
        printf("Etat: solide\n");
    } else if (temp >= 0 && temp < 100) {
        printf("Etat: liquide\n");
    } else {
        printf("Etat: gaz\n");
    }

    return 0;
}
