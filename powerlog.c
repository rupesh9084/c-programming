#include<stdio.h>
int powerlog(int a,int b){
    if(b==1)
    return a;
    int x=powerlog(a,b/2);
    if(b%2==0)
    return x*x;
    else
    return x*x*a;
}

int main(){
int a,b;
printf("enter the number:");
scanf("%d%d",&a,&b);
printf("%d",powerlog(a,b));

return 0;
}