#include<stdio.h>

int main() {
    long long int n,count=0;
    scanf("%lld",&n);
    if (n % 2 == 0) {
        count=n/2-1;
    }
    else {
        count=n / 2;
    }
    printf("%lld\n",count);

    return 0;
}
