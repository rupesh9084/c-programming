#include<stdio.h>

int main(){
int i,a[5],sum=0;
printf("enter the elements:");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}printf("the sum of all array elements is:");
for(i=0;i<5;i++){
    sum=sum+a[i];
}printf("%d",a[i]);
return 0;
}