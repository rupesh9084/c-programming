#include<stdio.h>

int main(){
int arr[100],n,i,pos;
printf("enter the size:");
scanf("%d",&n);

printf("enter the array elements:");
for(i=0;i<n;i++){
    scanf("%d", &arr[i]);
}printf("enter the pos to want you delete elemets:");
scanf("%d",&pos);
int po = pos-1;
while(po<n){
    arr[po]=arr[po+1];
    po++;
}
n=n-1;
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}