#include<stdio.h>
#include<string.h>

int main(){
char a[20];
char b[20];
printf("enter the first string:");
gets(a);
printf("enter the second string:");
gets(b);
if(strcmp(a,b)==0){
    printf("the string is equal");
}else{
    printf("the string is not equal");
}
return 0;
}