#include<stdio.h>
#include<string.h>

int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
         int ans = 1;
         int ant=0, sig=0;
         for(i=0; i<n ; ++i)
         {
                 ant=sig;
                 scanf("%d",&sig);
                 if(i == 0)
                    continue;
                 if(ant != sig)
                 ans++;
         }
         printf("%d\n",ans);

    }
    return 0;
}
