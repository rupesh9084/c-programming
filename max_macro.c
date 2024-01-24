#include<stdio.h>
# define max(a,b) if(a>b)\
                  printf("%d is greater",a);\
                  else\
                  printf("%d is greater",b);\

int main(){
    int a,b;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    max(a,b);
return 0;
}