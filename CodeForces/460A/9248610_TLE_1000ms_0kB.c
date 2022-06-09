#include<stdio.h>
int main()
{
    int m,n,x,i,k,l;
    int count=0;
    scanf("%d%d",&m,&n);l=m;

    for(i=1;i<=m;i++){
        x=i*n;
        if(x<=m)
        count++;
        else break;
    }
   m=count;
   while(count<=n){
    for(i=1;i<=m;i++){
        x=i*n;
        if(x<=m)
        count++;
        else break;
    }
}
     printf("%d\n",l+count);

    return 0;
}
