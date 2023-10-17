#include<stdio.h>

int main(){
int num;
printf("enter any number:=");
scanf("%d",&num);
if(num>0){
    printf("%d is a posotive number",num);
}else{
    printf("%d is a negative number",num);
}
return 0;
}