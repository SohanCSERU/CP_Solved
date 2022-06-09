#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d%d",&n,&c);
    int ans=0;
    int d=0;
    while (n--)
    {
        int t;
        scanf("%d",&t);
        if( t-d >c) ans=1;
        else ans++;
        d=t;
    }
    printf("%d\n",ans);
    return 0;
}