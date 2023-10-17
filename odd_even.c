#include<stdio.h>

int main(){
int num;
printf("enter thw number:");
scanf("%d",&num);
if(num%2==0){
    printf("%d is a even",num);
}else{
    printf("%d is a odd",num);
}
return 0;
}