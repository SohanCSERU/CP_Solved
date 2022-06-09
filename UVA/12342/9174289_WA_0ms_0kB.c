#include<stdio.h>
int main()
{
    double a,m,p,q,n;
    int T,i,k;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf",&m);
        if(m<=180000)
         printf("Case %d: 0\n",i);
        if(m<=480000 && m>180000){
         a=(float)(m/100)*10;
           printf("Case %d: 2000\n",i);
        }
        if(m<=880000 && m>480000){
         a=(float)(m/100)*15;
           printf("Case %d: %0.0lf\n",i,a);
        }
        if(m<=1180000 && m>880000){
         a=(float)(m/100)*20;
           printf("Case %d: %0.0lf\n",i,a);
        }
        if(m>1180000){
         a=(float)(m/100)*25;
          printf("Case %d: %0.0lf\n",i,a);
        }

    }

    return 0;
}
