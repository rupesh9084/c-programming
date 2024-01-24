#include<stdio.h>

int main(){
char a[6]="rupesh";
char *p[6];
for(int i=0;i<6;i++){
    p[i]=&a[i];
printf("%p ",p[i]);}
return 0;
}