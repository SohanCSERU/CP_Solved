#include<stdio.h>
int main()
{
    int arr[100],ara[100],a,b,x,y,i,x1,x2,y1,y2,cow,count=0;
    while(scanf("%d",&a)==1){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&cow);
        for(i=1;i<=cow;i++){
            scanf("%d%d",&x,&y);
            if((x>=x1 && y>=y1) &&(x<=x2 && y<=y2))
                
            else
                ara[i];
        }
        count++;
        for(b=1;b<=cow;b++)
        printf("Case %d: %d\n",count,b);

    }


    return 0;
}
