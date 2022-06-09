#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&n);
    if(n>=4){
    if(n%2==0)
        printf("YES\n");
    else
        printf("NO\n");
    }
    else
        printf("NO\n");

    return 0;
}
