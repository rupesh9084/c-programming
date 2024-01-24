#include<stdio.h>

int main(){
int i,n1,n2,j;
printf("enter the range:=");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++){
    for(j=2;j<=i;j++){
        if(i%j==0)
        break;
    }if(i==j){
    printf("%d ",j);}
}
return 0;
}