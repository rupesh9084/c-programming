#include<stdio.h>

int main(){
    int num=456785,sum=0;
    while(num>0){
        int temp = num%10;
        sum = sum+temp;
        num = num/10;
    }
    printf(" %d",sum);
return 0;
}