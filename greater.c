#include<stdio.h>

int main(){
int a,b,c;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
if ((a>b) && (a>c))
{
printf("a is greater numebr");
}
else if(b>c && b>a){
    printf("b is greater number");
}else{
    printf("c is greater numebr");
}
return 0;
}