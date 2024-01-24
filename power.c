#include<stdio.h>

int main(){
int a,b,i,power=1;
printf("enter the digit:");
scanf("%d",&a);
printf("enter the power:");
scanf("%d",&b);
for(i=1;i<=b;i++){
    power*=a;
}printf("%d power %d is %d",a,b,power);

return 0;
}