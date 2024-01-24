#include<stdio.h>
int power(int a, int b){
    int x=1;
    for(int i=1;i<=b;i++){
        x=x*a;
    }return x;
}

int main(){
int a,b,c;
printf("enter the number:");
scanf("%d%d",&a,&b);
c=power(a,b);
printf("%d",c);
return 0;
}