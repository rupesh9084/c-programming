#include<stdio.h>

int main(){
int i,a[5]={1,2,3,4,5},serch;
printf("enter the search number:");
scanf("%d",&serch);
for(i=0;i<5;i++){
    if(a[i]==serch){
        printf("yes");
        break;
    }if(a[i]==5){
        printf("no");
    }
}
return 0;
}