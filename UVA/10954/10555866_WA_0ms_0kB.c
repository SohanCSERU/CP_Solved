#include<stdio.h>

int T,test=0,cmd[5005];

int main(){
    int i,j,k,m,n,tmp=0,add=0,sum=0;
    while(scanf("%d",&T)&& T!=0){
         for(i=0;i<T;i++)
            scanf("%d",&cmd[i]);


        for(i=0;i<T;i++)
            for(j=i+1;j<T;j++)
              if(cmd[j]<cmd[i]){
                tmp=cmd[i];
                cmd[i]=cmd[j];
                cmd[j]=tmp;
        }

        for(i=0;i<T;i++){
            add=cmd[i]+test;
            test=add;
            sum+=test;add=0;
        }

        printf("%d\n",sum-cmd[0]);


    tmp=0;sum=0;test=0;add=0;
    }


    return 0;
}
