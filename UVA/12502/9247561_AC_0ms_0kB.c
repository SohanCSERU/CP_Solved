#include<stdio.h>
#include <math.h>
#include<string.h>

int main()
{
    int a,b,c,n,e,d,Rem=0,sum=0,an=0;
    scanf("%d",&n);
        while(n--)
        {
           scanf("%d%d%d",&a,&b,&c);
          Rem=a+(a-b);sum=a+b;
           e=c*(a+(a-b))/(a+b);
           an=c*Rem/sum;
           if(e<=0)
           printf("0\n");
           else
           printf("%d\n",e);
           sum=0,Rem=0;
        }
    return 0;
}
