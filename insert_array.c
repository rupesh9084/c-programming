#include<stdio.h>

int main(){
int a[100],i,pos,size,item;
printf("enter the size:");
scanf("%d",&size);
printf("enter array elements:");
for (i=0;i<size;i++){
    scanf("%d",&a[i]);
}printf("enter posotion that you want insert");
scanf("%d",&pos);
printf("enter iteam that you want to insert:");
scanf("%d",&item);
for(i=size;i>=pos;i--){
    a[i]=a[i-1];
}
a[pos]=item;
size++;
printf("result array elements:");
for(i=0;i<size;i++){
    printf("%d ",a[i]);
}
return 0;
}