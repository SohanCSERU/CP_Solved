#include <stdio.h>

int bu(long long int n){

   long long int reverse = 0;
   while (n != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + n%10;
      n = n/10;
   }
   return reverse;
}


int main()
{
    long long int n,ck=0,j,i,k,sum=0,flag = 0;

    scanf("%lld",&n);
    k=bu(n);
    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }


        for(j=2; j<=k/2; ++j)
    {
        if(k%j==0)
        {
            ck=1;
            break;
        }
    }


    if (flag==0 && ck==0)
        printf("%lld is emirp.",n);
    else if(flag==0 && ck!=0)
        printf("%lld is prime.",n);

    else
        printf("%lld is not prime.",n);

    return 0;
}
