#include <stdio.h>
#include <math.h>

int main()
{
    long long int value1, value2;
    long long int result,mod,X,ans;

    scanf("%lld%lld%lld",&value1,&value2,&X);

    result = pow(value1, value2);
    mod=result%X;
    ans=mod*-1;
    printf("%lld %lld is %lld\n", value1, value2,ans);

    return 0;
}
