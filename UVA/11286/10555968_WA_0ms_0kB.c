#include<stdio.h>

int T,N;
int main()
{
    int i,j,k,n,swap=0;
    while(scanf("%d",&T),T != 0){
        int csm[T][5];

        for(i=0;i<T;i++)
           for(j=0;j<5;j++)
                scanf("%d",&csm[i][j]);

    for(i=0;i <T; i++){
      for(j=0;j < 5; j++){
        if(csm[i][j]>csm[i][j+1])
        {
            swap=csm[i][j];
            csm[i][j]=csm[i][j+1];
            csm[i][j+1]=swap;
        }
    }
}
    for(i=0;i<T;i++){
           for(j=0;j<5;j++){
                printf("%d ",csm[i][j]);
           }
           printf("\n");
    }
    }

    return 0;
}
