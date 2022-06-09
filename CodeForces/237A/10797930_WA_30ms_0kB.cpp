#include<stdio.h>
int main()
{
    int m,n,i,k;
    int T,X=0,Y=0,count=1;
    scanf("%d",&T);
    scanf("%d%d",&m,&n);

    while(--T){
        scanf("%d%d",&m,&n);
        if(m==X && n==Y)
            count++;
        X=m;Y=n;
    }
    printf("%d\n",count);

    return 0;
}
