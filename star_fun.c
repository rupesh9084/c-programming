#include<stdio.h>
int star(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(" * ");
        }printf("\n");
    }return n;
}

int main(){
int r;
printf("enter the number:");
scanf("%d",&r);
star(r);
return 0;
}