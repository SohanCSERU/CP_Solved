#include<stdio.h>
int main()
{

    double ans,aver=0;
    int arr[10],b,a,count,sum,i;
    scanf("%d",&a);
    while(a--){
        scanf("%d",&b);
        sum=0;
         for(i=0;i<b;i++)
            {
              scanf("%d",&arr[i]);
              sum=sum+arr[i];
            }

    aver=(double)sum/b;
    count=0;
    for(i=0;i<b;i++){
       if(arr[i]>aver)
        count++;
    }
    ans=(double)count*100/b;
    printf("%0.3lf%%\n",ans);
    }
    return 0;
}
