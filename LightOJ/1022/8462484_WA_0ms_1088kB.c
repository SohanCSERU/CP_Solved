#include<stdio.h>
int main()
{
    int i,p;
    double a,b,c,n,r,pi=2*acos(0);
    scanf("%d",&p);
    for(i=0;i<p;i++){
      scanf("%lf",&a);
      b=2*a;
      c=b*b;
      r=pi*a*a;
      n=c-r;

     printf("%0.2lf\n",n);
    }
    return 0;
}
