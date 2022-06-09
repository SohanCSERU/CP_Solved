#include <stdio.h>

int main()
{
    int n,i,k,a=2,x;
    scanf("%d",&n);
    for(i=2;i<n+1;i++){
        printf("%d\n",a);
        a=a+i;
        if(a>=n)
            a=a-n;
    }

    return 0;
}

