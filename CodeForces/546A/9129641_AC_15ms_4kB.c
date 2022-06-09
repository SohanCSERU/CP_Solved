#include<stdio.h>
int main()
{
    int k,n,i,j;
    long long int x,y,sum=0;
    scanf("%d%lld%d",&k,&x,&n);
    for(i=1;i<=n;i++){
        j=k*i;sum=sum+j;
    }
    y=sum-x;
    if(y<0)
        printf("0\n");
    else
      printf("%lld\n",y);

    return 0;
}
