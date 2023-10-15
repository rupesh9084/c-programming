#include<stdio.h>

int main(){
int a,b,temp;
printf("enter two numebr:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("the swap of two number is:%d %d",a,b);
return 0;
}