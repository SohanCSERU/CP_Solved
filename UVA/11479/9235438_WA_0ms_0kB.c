#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d", &j);
    for(i=1;i<=j;i++) {
        long long int a,b,c;
        scanf("%lld%lld%lld", &a, &b, &c);
        if (a>0 && b>0 && c>0 && abs(b-c) < a && a < (b + c)) {
         if (a == b == c)
            printf("Case %d: Equilateral\n", i);
        else if (a == b || a == c || b == c)
            printf("Case %d: Isosceles\n", i);
        else
        printf("Case %d: Scalene\n", i);
        }
        else printf("Case %d: Invalid\n", i);
      a=0;b=0;c=0;
      }
      return 0;
 }
