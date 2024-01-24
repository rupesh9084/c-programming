#include<stdio.h>


int main(){
    int arr[16]={1,2,2,3,3,5,5,6,6,6,3,2,5,6,6},search;
    
    printf("enter a number");
    scanf("%d",&search);
    for(int i=0;i<16;i++){
     if(arr[i]==search){
         printf(" %d ",i);    
     }        
    }

    return 0;
}
