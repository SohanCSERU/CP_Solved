#include<stdio.h>
int main()
{
    int a,b,c,i,k,n,max=0,sum=0,and=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
     scanf("%d%d",&b,&c);
      sum=sum-b+c;
   
      if(sum>max)
        max=sum;
    }
    printf("%d\n",max);
    return 0;
}
