#include<stdio.h>
int power(int a,int b){
    if(b==0)
    return 1;
    return a*power(a,b-1);
}

int main(){
int a,b,s;
printf("enter the number:");
scanf("%d%d",&a,&b);
s=power(a,b);
printf("%d",s);
return 0;
}