#include<stdio.h>

int main(){
int a[2][2],b[2][2],add[2][2],i,j;
printf("enter the array elements:");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",a[i][j]);
    }printf("\n");
}printf("enter second elements:");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        scanf("%d",&b[i][j]);
    }
}for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",b[i][j]);
    }printf("\n");
}for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        add[i][j]=a[i][j]+b[i][j];
    }
}printf("sum of matrix is:\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    printf("%d ",add[i][j]);
    }printf("\n");
}
    

return 0;
}