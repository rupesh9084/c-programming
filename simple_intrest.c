#include<stdio.h>

int main(){
int p,t,r;
float si;
printf("enter the principal,time and rate:");
scanf("%d%d%d",&p,&t,&r);
si=(p*t*r)/100;
printf("the simple intrest is %f",si);
return 0;
}