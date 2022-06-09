#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d",&a);
    while(a--){
        scanf("%d%d",&b,&c);
        for(k=1;k<=c;k++){
        for(i=1;i<=b;i++){
            for(j=1;j<=i;j++){
                printf("%d",i);
            }
            printf("\n");
        }
        for(i=b-1;i>=1;i--){
            for(j=1;j<=i;j++){
                printf("%d",i);
            }
            printf("\n");
        }
        printf("\n");
    }
    }

    return 0;
}
