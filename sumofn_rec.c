#include<stdio.h>
int sum(int n){
    if(n==1)
    return n;
    return n+sum(n-1);
}

int main(){
int n,s;
printf("enter the number:");
scanf("%d",&n);
s=sum(n);
printf("%d",s);
return 0;
}