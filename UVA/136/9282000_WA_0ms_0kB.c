#include<stdio.h>
int main()
{
    int i,x,t,a,c=0,n,m;
    for(i=2;i<=10000;i++){
        if(i%2==0 || i%3==0 || i%5==0){
            x=i;c++;
            }
        else continue;
        if(c==1500)
        break;
    }
    printf("%d\n",x);

    return 0;
}
