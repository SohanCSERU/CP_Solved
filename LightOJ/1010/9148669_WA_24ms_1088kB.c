#include<stdio.h>
int main()
{
    int a,c,i,j,k,l,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d%d",&c,&k);
        sum=c*k;
        if(sum%2==0)
            printf("Case %d: %d\n",i,(sum/2));
        else
            printf("Case %d: %d\n",i,(sum+1)/2);
        sum=0;
    }
    return 0;
}
