#include<stdio.h>
int main()
{
   long long int T,a,N,t,i,j,sum=0;
    scanf("%lld",&t);
    long long int arr[t],max=0,min=0;

    for(i=0;i<t;i++){
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    for(j=0;j<t;j++){
        if(arr[j]>max)
            max=arr[j];
    }
    min=arr[0];
     for(j=1;j<t;j++){
        if(arr[j]<min)
            min=arr[j];
    }

    printf("%lld %lld\n",sum-max,sum-min);

    return 0;
}
