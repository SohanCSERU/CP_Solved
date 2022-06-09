#include<stdio.h>
int main()
{
    int a,b,c,max=0,i,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
       scanf("%d%d%d",&a,&b,&c);
        if(a>b && a>c){
           max=a;
           if(a*a==(b*b+c*c))
             printf("Case %d: yes\n",i);
           else
            printf("Case %d: no\n",i);
        }
        if(b>a && b>c){
          max=b;
         if(b*b==(a*a+c*c))
            printf("Case %d: yes\n",i);
           else
            printf("Case %d: no\n",i);
        }
         else{
           if(c*c==(b*b+a*a))
              printf("Case %d: yes\n",i);
           else
             printf("Case %d: no\n",i);
        }
        max=0;
    }

    return 0;
}
