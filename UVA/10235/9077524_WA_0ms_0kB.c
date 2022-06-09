#include <stdio.h>
#include<math.h>
int bu(int n){

   int reverse = 0;
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
    int n,ck=0,j,i,k,sum=0,flag = 0;

    scanf("%d",&n);
    k=bu(n);
    for(i=2; i<=sqrt(n); ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }


        for(j=2; j<=sqrt(k); ++j)
    {
        if(k%j==0)
        {
            ck=1;
            break;
        }
    }


    if (flag==0 && ck==0)
        printf("%d is emirp.",n);
    else if(flag==0 && ck!=0)
        printf("%d is prime.",n);

    else
        printf("%d is not prime.",n);

    return 0;
}
