#include <stdio.h>

int main ()
{
    int i,n,m,sum=0;
    scanf("%d",&n);

    for(i=1;i<n;i=i+2){
       m=n-i;
       if(i+m==n)
        printf("%d %d\n",i,m);
       break;
    }

    return 0;
}
