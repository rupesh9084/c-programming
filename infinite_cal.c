
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n=1;
    while(n!=0){
        int a,b;
        printf("\nenter two number's\n");
        scanf("%d%d",&a,&b);
        printf("1. addition\n");
        printf("2. subtraction\n");
        printf("3. multiply\n");
        printf("4. division\n");
        printf("5. exit\n");
        printf("enter your choice\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:printf("%d",a+b);
            break;
        case 2:printf("%d",a-b);
            break;
        case 3:printf("%d",a*b);
            break;
        case 4:printf("%d",a/b);
            break;
        case 5:exit(0);
               break;
        default:
        printf("invalid choice");
            break;
        }
        
    }

    return 0;
}