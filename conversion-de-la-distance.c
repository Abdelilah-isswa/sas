#include <stdio.h>
int main(){
    float km,yard;
    printf("entez la distance en km:");
    scanf("%f",&km);
    yard=km*1093.61;
    printf("la distance en yard est: %.2f yard",yard);
}