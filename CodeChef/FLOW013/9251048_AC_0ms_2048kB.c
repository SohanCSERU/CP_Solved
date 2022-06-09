#include<stdio.h>
int main()
{
    int a,b,c,i,m,n;
    scanf("%d",&n);
    while(n--){
     scanf("%d%d%d",&a,&b,&c);
    if((a==180 || b==180 || c==180) ||(a==0||b==0||c==0))
        printf("NO\n");
        else if(a+b+c==180)
        printf("YES\n");
           else printf("NO\n");
    }

    return 0;}
