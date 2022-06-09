#include<stdio.h>
int main()
{
    int a,b,c,max=0,right=0,ck=1;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        if(a==0 && b==0 && c==0)
            break;
     else{
        if(a>b && a>c){
           max=a;
           if(a*a==(b*b+c*c))
             printf("right\n");
           else
            printf("wrong\n");
        }
       else if(b>a && b>c){
          max=b;
         if(b*b==(a*a+c*c))
            printf("right\n");
           else
            printf("wrong\n");
        }
         else{
           if(c*c==(b*b+a*a))
             printf("right\n");
           else
            printf("wrong\n");
        }
        max=0;
    }
    }
    return 0;
}
