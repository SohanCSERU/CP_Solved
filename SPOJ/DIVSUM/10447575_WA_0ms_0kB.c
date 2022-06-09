#include<stdio.h>
int main()
{
    int a,x,c,i,j,k=0;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&c);
        for(i=2;i<=c/2;i++){
            if(c%i==0){
                k+=c/i;
            }
        }
        printf("%d\n",k+1);
        k=0;
    }
    return 0;
}
