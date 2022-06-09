#include<stdio.h>
int main()
{
    int a,b,sum=0;
    while(scanf("%d%d",&a,&b)==2){

        printf("%d\n",a+b);
        a=0,b=0;
    }
    return 0;
}
