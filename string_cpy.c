#include<stdio.h>
#include<string.h>

int main(){
char a[20];
char b[20];
printf("entre the string:");
gets(a);
strcpy(b,a);
printf("the copy of string is %s",b);
return 0;
}