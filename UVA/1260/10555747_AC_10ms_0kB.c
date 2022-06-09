#include<stdio.h>
int cmd[1005],cds[1005];
int main()
{
    int T,N,i,j,k,x,took=0,cash=0;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
          for(i=0;i<N;i++)
              scanf("%d",&cmd[i]);

    for(i=1;i<=N;i++){
       for(j=0;j<i;j++){
           if(cmd[j]<=cmd[i]){
                took++;
           }
    }
        cds[j]=took;
        took=0;
}
     for(k=0;k<N;k++){
            cash+=cds[k];
     }
      printf("%d\n",cash);
    cash=0;
    }


    return 0;
}
