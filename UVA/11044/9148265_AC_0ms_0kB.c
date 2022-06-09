#include<stdio.h>
 int main()
 {
    int t,n,m,x=0,y=0;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d %d",&n,&m);
      x=n/3;y=m/3;
      printf("%d\n",x*y);
    }
 }
