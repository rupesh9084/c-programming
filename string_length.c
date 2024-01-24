#include<stdio.h>
#include<string.h>
int main(){
char a[20];
printf("enter the string:");
gets(a);
printf("the length of string is: %d",strlen(a));
return 0;
}