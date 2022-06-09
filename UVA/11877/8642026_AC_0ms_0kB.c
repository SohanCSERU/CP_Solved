#include<stdio.h>
int main()
{
    int t,x,y,i,k=0;
    for(i=0;i<10;i++){
    scanf("%d",&t);
       while(t>=3){
        x=t/3;
        y=t%3;
        t=x+y;
        k=k+x;
        if(t==2)
          k=k+1;
        }
        printf("%d\n",k);
        k=0;
        t=0;
    }

    return 0;
}
