#include<stdio.h>
int fabo(int n){
if(n<=2)
return 1;
return fabo(n-1)+fabo(n-2);

}

int main(){
int n,s;
printf("enter the number:");
scanf("%d",&n);
s=fabo(n);
printf("%d",s);
return 0;
}