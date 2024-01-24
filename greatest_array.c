#include<stdio.h>

int main(){
int i,a[100],size,max;
printf("enter the size:");
scanf("%d",&size);
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}max=a[0];
for(i=0;i<size;i++){
    if(a[i]>max){
        max=a[i];
    }
}printf("the greatest number is %d",max);
return 0;
}