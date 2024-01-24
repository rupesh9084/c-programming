#include<stdio.h>
int decrease(int x){
    if(x==0)
    return x;
    printf("%d\n",x);
    decrease(x-1);
    return x;
}

int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
decrease(n);
return 0;
}