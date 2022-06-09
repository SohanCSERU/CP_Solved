#include<stdio.h>
int main()
{
    int a,b,c,i,m,n;
    scanf("%d",&n);
    while(n--){
     scanf("%ld%ld%ld",&a,&b,&c);
     if(a==0 || b==0 || c==0)
        printf("No\n");
       else if((a+b)<=c || (b+c)<=a || (c+a)<=b){
           printf("YES\n");
        }
           else printf("NO\n");
    }

    return 0;}
