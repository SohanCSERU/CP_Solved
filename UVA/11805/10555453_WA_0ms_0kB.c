#include<stdio.h>
int main()
{
    int a,b,i,j,test,N,K,P;
    scanf("%d",&test);
    for(i=1;i<=test;i++){
        scanf("%d%d%d",&N,&K,&P);
        a=N-K;
        if(a<P)
            printf("Case %d: %d\n",i,P-a);
         if(a>P)
            printf("Case %d: %d\n",i,P+a);
         if(a==P)
            printf("Case %d: %d\n",i,N);
    }

    return 0;
}
