#include<stdio.h>
int main()
{
    int p,q,w,i,k,T,j,sum=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
      printf(" \n");
     scanf("%d",&k);
     for(j=0;j<k;j++){
        scanf("%d",&p);
        sum=sum+p;
     }
     printf(" \n");
     printf("Case %d: %d",i,sum);
     sum=0;
    }
    return 0;
}
