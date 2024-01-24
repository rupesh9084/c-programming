#include<stdio.h>
int fact(int x){
    int i,fact=1;
    for(i=1;i<=x;i++){
        fact=fact*i;
    }return fact;
}

int main(){
int n,r,npr;
printf("enter the number:");
scanf("%d%d",&n,&r);
npr=fact(n)/fact(n-r);
printf("%d",npr);
return 0;
}