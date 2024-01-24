#include<stdio.h>
#include<ctype.h>
#include<string.h>
void lwr(char ch[]){
    for(int i=0;i<strlen(ch);i++){
        ch[i]=tolower(ch[i]);
    }
}
int main(){
char ch[20];
printf("enter the string:");
gets(ch);
lwr(ch);
printf("%s",ch);
return 0;
}