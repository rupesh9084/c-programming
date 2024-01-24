#include<stdio.h>
#include<string.h>

int main(){
char a[20];
printf("enter the string:");
gets(a);
printf("the lower string is:%s",strlwr(a));
return 0;
}