#include<stdio.h>
void good(int x){
    if(x==0)
    return ;
    printf("good morning\n");
    good(x-1);
    return;
}

int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
good(n);
return 0;
}