#include <stdio.h>
int main ()
{
    int t,c=1,i,n,age,m,cap;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        m=(n+1)/2;
        for (i=1;i<=n;i++)
        {
            scanf("%d",&age);
            if (i==m) cap=age;
        }
        printf("Case %d: %d\n",c++,cap);
    }
    return 0;
}