#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char a[50];
printf("enter the string:");
gets(a);
for(int i=0;i<strlen(a);i++){
    a[i]=toupper(a[i]);
}printf("%s",a);
return 0;
}