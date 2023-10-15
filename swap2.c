#include<stdio.h>

int main(){
int a,b;
printf("enter two numebr:");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the swap of two number is:%d %d",a,b);
return 0;
}