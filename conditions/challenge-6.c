#include <stdio.h>
int main(){
    int x;
    printf("donner un nombre:");
    scanf("%d",&x);
    if(x<0){
printf("le nombre est négatif ");
    }else if (x>0){
printf("le nombre est  positif");
    }else{
printf("le nombre est nul");
    }
}