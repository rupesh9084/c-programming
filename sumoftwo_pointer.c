#include<stdio.h>
int add(int *a, int *b){
    return *a+*b;
}

int main(){
int a,b,c;
printf("enter two number:");
scanf("%d%d",&a,&b);
c=add(&a,&b);
printf("the add of two number is %d",c);
return 0;
}