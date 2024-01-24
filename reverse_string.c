#include<stdio.h>
#include<string.h>
int main(){
char a[20];
printf("enter the string:");
gets(a);
printf("the reverse os string is:%s",strrev(a));
return 0;
}