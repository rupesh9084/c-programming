#include<stdio.h>
int add(int x){
    int sum=0;
    while(x>0){
        x=x/10;
        sum++;
    }return sum;
}

int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
printf("%d",add(n));
return 0;
}