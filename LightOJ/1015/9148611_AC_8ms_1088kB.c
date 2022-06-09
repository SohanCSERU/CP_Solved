#include<stdio.h>
int main()
{
    int p,q,w,i,k,T,j,sum=0;
    scanf("%d",&T);

    for(i=1;i<=T;i++){
      scanf("%d",&k);

     for(j=0;j<k;j++){
        scanf("%d",&p);
        if(p >= 0){
        sum=sum+p;
        }
        else
            continue;
     }
        printf("Case %d: %d\n",i,sum);
        sum=0;p=0;
    }
    return 0;
}
