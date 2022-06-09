#include <stdio.h>
int main ()
{
    int n,maximum;
    while (scanf("%d",&n)==1)
    {
        maximum=n;
        while (n>1)
        {
            if (n==2)
            {
                maximum++;
                break;
            }
            else
            {
                maximum+=(n/3);
                n=n/3+n%3;
            }
        }
        printf("%d\n",maximum);
    }
    return 0;
}
