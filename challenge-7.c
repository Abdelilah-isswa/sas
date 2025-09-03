#include <stdio.h>
int main(){
    int x;
    char c;
    
    printf("entrer un alphabet");
    scanf("%c",&c);
    x=c;
    printf("%c",c);
    printf("%d",x);

    if(x<90 && x>65){
        
printf("un alphabet majuscule");
    }else{
printf("un alphabet minuscules");

    }
}