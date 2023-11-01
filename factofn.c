#include<stdio.h>

int main(){
int i,n,fact=1;
printf("enter the numebr:=");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fact=fact*i;

}printf("fact of number is:=%d",fact);

return 0;
}