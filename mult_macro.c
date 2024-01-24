#include<stdio.h>
#define mult(a,b) (a*b)

int main(){
    int a,b;
    printf("enter two number:");
    scanf("%d%d",&a,&b);
    printf("%d",mult(a,b));

return 0;
}