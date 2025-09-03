#include <stdio.h>
int main(){
    int x;
    int y;
    printf("entrer un nombre:");
    scanf("%d",&x);
    for(int i =0;i<=10;i++){
        printf("%d * %d =%d \n",i,x,x*i);
    }
}