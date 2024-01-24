#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char a[50],i;
printf("enter the string:");
gets(a);
for(i=0;i<strlen(a);i++){
    a[i]=tolower(a[i]);
}printf("%s",a);
return 0;
}