#include<stdio.h>

int main(){

    int a,x,i,j,tmp=0,max=0;
    int ara[105];

    scanf("%d",&a);j=a;
    while(a--){
        scanf("%d",&x);
        tmp+=x;
        if(x>max)
            max=x;
    }
    i=max*j-tmp;
    printf("%d\n",i);

    return 0;
}
