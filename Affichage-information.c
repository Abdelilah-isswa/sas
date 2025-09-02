#include <stdio.h>
int main(){
    char nom[50];
    char prénom[50];
    int age;
    char sexe[10];
    char email[100];
    printf("Nom:");
    scanf("%s",nom);
    printf("prenom:");
    scanf("%s",prénom);
    printf("age:");
    scanf("%d",&age);
    printf("sexe:");
    scanf("%s",sexe);
    printf("email:");
    scanf("%s",email);
    printf("<-----votre info personnelle------> \n");
    printf("Nom:%s\n",nom);
    printf("prenom:%s\n",prénom);
    printf("age:%d\n",age);
    printf("sexe:%s\n",sexe);
    printf("email:%s\n",email);


}