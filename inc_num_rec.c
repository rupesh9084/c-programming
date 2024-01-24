#include<stdio.h>
int increase(int x){
    if(x==0)
    return x;
    increase(x-1);
    printf("%d ",x);
    return x;
}

int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
increase(n);
return 0;
}