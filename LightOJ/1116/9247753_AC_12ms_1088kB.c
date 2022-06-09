#include <stdio.h>
#include <math.h>
int main()
{
    long long int m, n, w;
    long long int tst,i,j,odd,V,lim;
    scanf("%lld",&tst);
    for(i=1;i<=tst;i++)
    {
        scanf("%lld",&w);
        lim = w/2;
        V=0;
        odd=0;
        for(j=2;j<=lim;j=j*2)
        {
            if(w%j==0)
                odd=w/j;
            if(odd%2==1)
            {
                V=1;
                break;
            }
        }
        if(V==1)
            printf("Case %lld: %lld %lld\n",i,odd,j);
        else
            printf("Case %lld: Impossible\n", i);
    }
    return 0;
}

