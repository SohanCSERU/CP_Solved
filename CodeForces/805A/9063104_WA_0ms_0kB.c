#include<stdio.h>
#include<math.h>
int main()
{
    int l,k,i,sum,count;
    double m,n,j,q;
    double arr[100];

    scanf("%lf%lf",&m,&n);
    for(k=m;k<=n;k++){
        for(i=2;i<=sqrt(m);i++){
            if(m/2==0)
               sum=i;
                for(l=i;l<100;l++)
                sum=arr[l];
            count++;
        }
}
    return 0;
}
