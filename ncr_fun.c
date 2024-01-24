#include<stdio.h>
int fact(int x){
    int i,fact=1;
    for(i=1;i<=x;i++){
        fact=fact*i;
    }return fact;
}

int main(){
int n,r,ncr;
printf("enter the number:");
scanf("%d%d",&n,&r);
ncr=fact(n)/(fact(r)*fact(n-r));
printf("%d",ncr);

return 0;
}