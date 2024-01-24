#include<stdio.h>

int main(){
char a='r';
void *b=&a;
printf("%c",*( char *)b);
return 0;
}