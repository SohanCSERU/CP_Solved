#include<stdio.h>
int main()
{
    int t,i,j,n,a,max=0;
    scanf("%d",&n);
    for(j=1;j<=t;j++){
       scanf("%d",&n);
        for(i=0;i<n;i++){
          scanf("%d",&a);
          if(a>max)
            max=a;
        }
        printf("Case %d: %d\n",j,max);
        max=0;
    }
    return 0;
}
