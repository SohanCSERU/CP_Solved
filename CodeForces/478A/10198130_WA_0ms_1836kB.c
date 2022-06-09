#include<stdio.h>
int main()
{
    int a, b, c, d, e, sum=0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    sum = (a+b+c+d+e);
    if(sum==0)
        printf("-1");
    else if(sum%3==0)
        printf("%d\n", sum/3);
    else
        printf("-1\n");

    return 0;
}
