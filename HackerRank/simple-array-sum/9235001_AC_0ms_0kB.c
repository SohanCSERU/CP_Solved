#include <stdio.h>

int main ()
{
    int i,n,m,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        sum=sum+m;
    }
    printf ("%d\n",sum);
    return 0;
}
