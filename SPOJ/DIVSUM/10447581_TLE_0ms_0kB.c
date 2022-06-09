#include<stdio.h>
int main()
{
    long long int a,x,c,i,j,k=0;
    scanf("%lld",&a);
    while(a--){
        scanf("%lld",&c);
        for(i=1;i<=c/2;i++){
            if(c%i==0){
                k+=i;
            }
        }
        printf("%lld\n",k);
        k=0;
    }
    return 0;
}
