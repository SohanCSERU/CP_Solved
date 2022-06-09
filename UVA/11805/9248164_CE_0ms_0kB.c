#include<stdio.h>
int main()
{
    int n,k,p,a,s,i;
    scanf("%d",&a);{
        for(i=1;i<=a;i++)
        {
            scanf("%d%d%d",&n,&k,&p);
            s=k+p;
            while(s>n)
            {
                s=s-n;
            }
            printf("Case %d: %d\n",i,s);
        }
    return 0;
}
