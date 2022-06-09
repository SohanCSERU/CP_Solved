#include<stdio.h>
int main()
{
    int T,N,t,k,H,M,H1,M1,i,j;
    int min=0,ara[100];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
     scanf("%d%d:%d",&N,&H,&M);

      for(j=0;j<N;j++){
         scanf("%d:%d%d",&H1,&M1,&t);
      ara[j]=(H1-H)*60+M1+t;
      }

      for(k=0;k<N;k++){
        if(ara[k] < ara[k+1])
          min=ara[k];
          else
            continue;
      }

    printf("Case %d: %d\n",i,min);
    min=0;
    }
    return 0;
}
