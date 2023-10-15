#include<stdio.h>

int main(){
int a,b;
printf("enter two number");
scanf("%d%d",&a,&b);
printf("before swapping first number is:=%d\n",a);
printf("before swapping second number is:=%d\n",b);
a=a+b;
b=a-b;
a=a-b;
printf("afetr swappping first number is %d\n",a);
printf("after swapping second number is %d",b);
return 0;
}