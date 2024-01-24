#include<stdio.h>

int main(){
int n,r,i,nfact=1,rfact=1,nrfact=1,ncr;
printf("enter the n:");
scanf("%d",&n);
printf("enter the r:");
scanf("%d",&r);
for(i=1;i<=n;i++){
    nfact=nfact*i;
}for(i=1;i<=r;i++){
    rfact=rfact*i;
}for(i=1;i<=n-r;i++){
    nrfact=nrfact*i;
}
ncr=nfact/(rfact*nrfact);
printf("%d",ncr);
return 0;
}