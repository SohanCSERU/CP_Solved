#include<stdio.h>
int main()
{
    int T,n,i,j=0,a,b;
    int arr[1001];
    while(scanf("%d",&n)==1){
            if(n==42)
             break;
        j++;arr[j]=n;
    T=j;
    }
    for(i=1;i<=T;i++)
    printf("%d\n",arr[i]);

    return 0;
}
