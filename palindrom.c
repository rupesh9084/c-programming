#include<stdio.h>
int main(){
int n,rev=0,rem,org;
printf("enter the number:");
scanf("%d",&n);
org=n;
while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
}if(rev==org){
    printf("yes");
}else{
    printf("not");
}
return 0;
}