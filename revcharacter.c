#include<stdio.h>
#include<string.h>

int main(){
char str[50],i;
printf("enter the string:");
scanf("%s",&str);
for(i=strlen(str)-1;i>=0;i--){
printf("%c",str[i]);
}
return 0;
}