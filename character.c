#include<stdio.h>

int main(){
char ch;
printf("enter the character:=");
scanf("%c",&ch);
if (ch>=97 && ch<122)
{
    printf("small character %c",ch);
}
else if (ch>=65 && ch<=90)
{
    printf("capital character",ch);
}

return 0;
}