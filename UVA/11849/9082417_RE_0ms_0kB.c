#include <stdio.h>
int ara[1000001];

int main(){
    int m,r,p,v,n,i,j,add;

    while(scanf("%d%d",&n,&m),n!=0 && m!=0){
        for (i=0;i<n;i++) {
            scanf("%d",&ara[i]);
        }
        for(j=0;j<m;j++) {
            scanf("%d",&v);

            while(p<n && ara[p]<v)
                p++;
                  if(ara[p]==v)
                r++;
        }
        printf("%d\n",r);
    }
    return 0;
}
