#include<stdio.h>
int main()
{
    long long int a,u,b,T,X,i,k,sum,div,p,q,r,s,t;
   
    scanf("%d",&T);
    for(i=0;i<T;i++){
     scanf("%d",&t);
     X=t*567;
     div=(int)X/9;
     sum=div+7492;
     p=sum*235;
     q=(int)p/47;
     s=q-498;
     printf("%lld\n",s);

     b=s%10;
     r=s-b;
     a=r/10;
     u=a%10;
     if(u<1){
        u=u*-1;
     }
     printf("%lld\n",u);

    }
    return 0;
}
