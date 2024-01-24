#include<stdio.h>

int main(){
int i,n,a[100],pos;
printf("enter the size:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}printf("enter the posotion to want to delete:");
scanf("%d",&pos);
if(i>=n+1){
    printf("sorry out of range:");
}else{
    for(i=pos-1;i<n-1;i++)
    a[i]=a[i+1];
    printf("resulted array is:");
    for(i=0;i<n-1;i++)
    printf("%d ",a[i]);
}
return 0;
}