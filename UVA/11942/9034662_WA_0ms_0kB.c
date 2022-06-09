#include<stdio.h>
int main()
{
    int arr[10],ara[10],and[10],sum[10],a,b,i,j,k,l;
    int T,t,tmp=0;

    scanf("%d",&t);
    for(i=0;i<t;i++){
        for(k=0;k<10;k++)
            scanf("%d",&arr[k]);

        printf("Lumberjacks:\n");
         for(k=0;k<10;k++)
            ara[k]=arr[k];

        for(l=0;l<10;l++)
            for(k=l+1;k<10;k++)
               if(ara[l]>ara[k]){
                tmp=ara[k];
                ara[k]=ara[l];
                ara[l]=tmp;
            }

        int q=0,z;
        for(k=9;k>=0;k--){
            and[k]=ara[q];
            q++;
        }

        for(j=9;j>=0;j--)
            for(l=0;l<10;l++)
               sum[l]=and[j];


        for(l=0;l<10;l++)
            if(arr[l]!=ara[l]){
               printf("Unordered\n");
                break;
            }
              else
                    printf("Ordered\n");
                    break;

    }
    return 0;
}