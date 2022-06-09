#include <stdio.h>
int main ()
{
    int i,n,t,a,b,c,sum=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&t);
        for(i=0;i<t;i++){
         scanf("%d%d%d",&a,&b,&c);
         sum=sum+a*c;
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
