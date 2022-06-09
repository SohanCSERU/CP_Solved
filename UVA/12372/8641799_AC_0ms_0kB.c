#include<stdio.h>
int main()
{
    int x,y,z,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
     scanf("%d%d%d",&x,&y,&z);
          if(x<=20 && y<=20 && z<=20)
            printf("Case %d: good\n",i+1);
          else
            printf("Case %d: bad\n",i+1);
    }
    return 0;
}
