#include<stdio.h>
int main()
{
    int t,i,n,a,max=0;
    scanf("%d",&n);
    for(i=0;i<t;i++){
       scanf("%d",&n);
        for(i=0;i<n;i++){
          scanf("%d",&a);
          if(a>max)
            max=a;
        }
        printf("%d\n",max);
        max=0;
    }
    return 0;
}
