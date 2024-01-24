#include<stdio.h>

int main(){
int arr[5],i;
printf("enter the array elements:");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
}printf("the reverse of array elements is:");
for(i=4;i>=0;i--){
    printf("%d ",arr[i]);
}
return 0;
}