#include<stdio.h>
int main()
{
    int a,b,c,d,i,ans=0,j;
    scanf("%d",&i);
    while(i--){
    scanf("%d",&c);
    while(c!=0){
    d=c%10;
    c=c-d;c=c/10;
    printf("%d",d);
}
    printf("\n");
    ans=0;
}
return 0;
}
