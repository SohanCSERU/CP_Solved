#include<stdio.h>
int main()
{
    int a,b,c,n,i,k=0,j;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&a,&b,&c);
        if((b<a && b>c) ||(b<c && b>a) )
            k=b;
        if((b>a && c<a)||(a>b && a<c))
            k=a;
        if((c>a && c<b)||(c<a && c>b))
            k=c;

        printf("%d\n",k);
        k=0;
    }

    return 0;
}
