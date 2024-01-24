#include<stdio.h>
#include<ctype.h>
#include<string.h>
void upr(char ch[]){
    for(int i=0;i<strlen(ch);i++){
        ch[i]=toupper(ch[i]);
    }
}
int main(){
char a[50];
printf("enter the string:");
gets(a);
upr(a);
printf("%s",a);
return 0;
}