#include<stdio.h>
int main()
{
    int i=0,n,k;
    scanf("%d",&n);
    if(n%5!=0)
        i++;
    k=n/5;
    printf("%d\n",k+i);

    return 0;
}
