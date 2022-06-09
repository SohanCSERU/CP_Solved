#include<stdio.h>
int main()
{
    long long int a,x,c,i,j,k=0;
    scanf("%lld",&a);
    while(a--){
        scanf("%lld",&c);
        for(i=2;i<=c;i++){
            if(c%i==0){
                k+=c/i;
            }
        }
        printf("%lld\n",k);
        k=0;
    }
    return 0;
}
