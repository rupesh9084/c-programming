#include<stdio.h>

int main(){
int a[10][10],row,col,i,j;
printf("enter the row and col:");
scanf("%d%d",&row,&col);
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&a[i][j]);
    }
}printf("the matrix is:\n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("%d ",a[i][j]);
    }printf("\n");
}printf("transpose matrix:\n");
for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        if(i<j){
        int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }}
}for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        printf("%d ",a[i][j]);
    }printf("\n");
}
return 0;
}