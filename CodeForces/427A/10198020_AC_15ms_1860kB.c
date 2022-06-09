#include<stdio.h>
int main()
{
    int i,j=0,n,T;
    int k,count=0,cnt=0,notrt=0;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&n);
        if(n > 0) {
            cnt = cnt + n;
        }
        else if(n < 0){
            if(cnt > 0) {
                cnt--;
            }
            else {
                notrt++;
            }                      //untreated crimes is incremented
        }
    }

    printf("%d\n",notrt);


    return 0;
}
