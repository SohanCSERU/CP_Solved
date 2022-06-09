#include<stdio.h>
int main()
{
    int a=0,w,e,t,x,y,z,k,i;
    scanf("%d",&t);
    for(i=0;i<=t;i++){
      scanf("%d%d%d",&w,&k,&e);
         x=w+k;
         while(x>=e){
        y=x/e;
        z=x%e;
        x=y+z;
        a=a+y;
       }
       printf("%d\n",a);
       x=0;
       a=0;
    }
    return 0;
}
