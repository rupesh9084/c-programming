#include<stdio.h>

int main(){
int c,r;
printf("enter the size of row:");
scanf("%d",&r);
printf("enter the size of coloum:");
scanf("%d",&c);
int a[c][r];
printf("enter the elemets:");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
}for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",a[i][j]);
    }printf("\n");
}
return 0;
}