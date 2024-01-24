#include<stdio.h>

int main(){
int arr[10],i;
printf("enter the array elements:");
for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
}for(i=0;i<10;i++){
    if(i%2!=0)
    arr[i]*=2;
    else{
        arr[i]*=10;
    }printf("%d ",arr[i]);
}
return 0;
}