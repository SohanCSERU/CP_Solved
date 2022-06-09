#include<stdio.h>

long long int T,test=0,cmd[2000005];

int main(){
    long long int i,j,k,m,n,tmp=0;
    while(scanf("%lld",&T)&& T!=0){
         for(i=0;i<T;i++)
            scanf("%lld",&cmd[i]);


        for(i=0;i<T;i++)
            for(j=i+1;j<T;j++)
              if(cmd[j]<cmd[i]){
                tmp=cmd[i];
                cmd[i]=cmd[j];
                cmd[j]=tmp;
        }

         for(k=0;k<T;k++)
            printf("%d ",cmd[k]);

     printf("\n");
    tmp=0;
    }


    return 0;
}
