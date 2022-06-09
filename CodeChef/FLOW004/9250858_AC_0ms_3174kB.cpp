
#include<stdio.h>
int main()
{
    int a,b,c,d,i,f=0,l,ans=0,j;
    scanf("%d",&i);
    while(i--){
    scanf("%d",&c);l=c%10;
    while(c >= 10){
    d=c%10;
    c=c-d;c=c/10;
    f=c;
}
   printf("%d\n",f+l);
    ans=0;
}
return 0;
}
