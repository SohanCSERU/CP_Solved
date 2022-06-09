#include<stdio.h>
int main(){
    int n,k,cont,res,count=0;

    while(scanf("%d %d",&n,&k)==2){
        cont=0;
        res=0;

        while(n>0){
            cont=cont+n+res;
            res=res+n;
            n=res/k;
            res=res%k;
        }

        printf("%d\n",cont);
    }

    return 0;
}
