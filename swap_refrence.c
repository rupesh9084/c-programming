
#include<stdio.h>
int swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return *x,*y;
}

int main(){
int a,b;
printf("enter the value of a and b:");
scanf("%d%d",&a,&b);
swap(&a,&b);

printf("%d\n",a);
printf("%d",b);
return 0;
}