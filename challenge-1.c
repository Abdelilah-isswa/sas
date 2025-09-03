#include <stdio.h>
int main(){
    int revenu;
    int score;
    int duree;

    printf("donner le revenu annuel:");
    scanf("%d",&revenu);
    printf("donner le score de crédit:");
    scanf("%d",&score);
    printf("donner la durée du pret:");
    scanf("%d",&duree);
    if(revenu>=30000 && score>=700 && duree<=10){
        printf("Éligible\n");
    }else if(revenu>=30000 && score>=650 && duree<=15){
        printf("Éligible avec conditions\n");
    }else{
        printf("Non éligible\n");
    }
}