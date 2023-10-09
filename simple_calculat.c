#include<stdio.h>

int main(){
int a,b,sum,sub,mult,div,rem;
printf("enter the number:");
scanf("%d%d",&a,&b);
sum=a+b;
sub=a-b;
mult=a*b;
div=a/b;
rem=a%b;
printf("the sum of a and b is %d\n",sum);
printf("the sub of a and b is %d\n",sub);
printf("the mult of a and b is %d\n",mult);
printf("the div of a and b is %d\n",div);
printf("the rem of a and b is %d\n",rem);
return 0;
}