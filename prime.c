#include<stdio.h>

int main(){
int i,n,flag=0;
printf("enter the number:");
scanf("%d",&n);
if(n==0||n==1)
flag=1;
for(i=2;i<=n/2;i++){
    if(n%i==0){
        flag=1;
        break;
    }
}if(flag==0){
    printf("prime number");
}else{
    printf("not a prime number");
}
return 0;
}