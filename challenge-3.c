#include <stdio.h>
int main(){
int a;
int b;
int c;
printf("entrer a:");
scanf("%d",&a);
printf("entrer b:");
scanf("%d",&b);
c=a+b;
if(a==b){
    printf("%d\n",c*3);
}else{
    printf("%d\n",c);
}
    return 0;
}