#include<stdio.h>

int main(){
int i,n,a[100],key,freq=0;
printf("enter the size:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}printf("enter the choice to find frequnce:");
scanf("%d",&key);
for(i=0;i<n;i++){
    if(a[i]==key)
    freq++;
}printf("the frequence %d is %d",key ,freq);
return 0;
}