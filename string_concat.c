#include<stdio.h>
#include<string.h>

int main(){
char a[20];
char b[20];
printf("enter the first string:");
gets(a);
printf("enter the second string:");
gets(b);
printf("the concat of string is:%s",strcat(a,b));
return 0;
}