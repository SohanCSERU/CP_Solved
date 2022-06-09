#include<stdio.h>
int main()
{
    int a,b,c,sum=0,T,t,n,m,Rem1,Rem2;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d",&a,&b,&c);
        t=(a+b)/3;
        Rem1=a-t;
        if(Rem1<1)
            Rem1=0;
      Rem2=b-t;
        if(Rem2<1)
            Rem2=0;
            if(Rem2==0)
                printf("%d\n",c);
            else{
        sum=c*Rem1/(Rem1+Rem2);
        printf("%d\n",sum);
            }
        sum=0;t=0;Rem1=0;Rem2=0;
    }

    return 0;
}
