#include<stdio.h>
#include<string.h>

int main(){
char a[10];
printf("enter the string:");
gets(a);
printf("the upper strig is %s",strupr(a));
return 0;
}