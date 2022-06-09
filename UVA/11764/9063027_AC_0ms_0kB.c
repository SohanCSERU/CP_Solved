#include <stdio.h>
int main ()
{
    int k,i,b,x,n,t,a,hi=0,low=0,sum=0;
    scanf("%d",&n);
    for(k=1;k<=n;k++){
        scanf("%d",&t);
        for(i=0;i<t;i++){
         scanf("%d",&a);
            for(i=0;i<(t-1);i++){
                scanf("%d",&b);
            if(a==b)
                continue;
            if(a<b)
                hi++;
            if(a>b)
                low++;
            a=b;
            }
            printf("Case %d: %d %d\n",k,hi,low);
        }

        sum=0;low=0;hi=0;
    }

    return 0;
}
