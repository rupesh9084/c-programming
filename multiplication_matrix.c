#include<stdio.h>
int main(){
    int arr[100][100],arr2[100][100],arr3[100][100],row,col;
    printf("enter no of row and col:");
    scanf("%d%d",&row,&col);
    
    printf("enter numbers in matrix 1:");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
        }    
    }
    printf("enter numbers in matrix 2:");
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        scanf("%d",&arr2[i][j]);
        }    
    }
 int i,j;
    for(i=0;i<row;i++){
        for( j=0;j<col;j++){
        arr3[i][j]=0;
        for(int k=0;k<col;k++)
         arr3[i][j] += (arr[i][k]*arr2[k][j]);
        }
      }
 for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        printf("%d ",arr3[i][j]);
        }    
        printf("\n");
    }
    return 0;
}