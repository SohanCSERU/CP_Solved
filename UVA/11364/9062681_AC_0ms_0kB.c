#include <stdio.h>

int main()
{
    int cases,n,val;
    scanf("%d",&cases);
    while(cases--){
        scanf("%d",&n);
        int max=0,min=100;
        while(n--){
            scanf("%d",&val);
            if(val>max)
                max=val;
            if(val<min)
                min=val;
        }
        printf("%d\n",2*(max-min));
    }
    return 0;
}
