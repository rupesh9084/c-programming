#include<stdio.h>

int main(){
int i,a[5],mul=1;
printf("enter the elements:");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}printf("the sum of all array elements is:");
for(i=0;i<5;i++){
    mul=mul*a[i];
}printf("%d",a[i]);
return 0;
}