#include<stdio.h>
int main()
{
    int i,j,k,N,T,n,l;
    int count=0,fla=1,flag=1,ind=1,str=1;

    while(scanf("%d",&T)&& T!=0){
    int arr[T],cmd[T],and[T],or[T];
    for(i=1;i<=T;i++){
        arr[i]=i;
    }
    for(j=T;j>0;j--){
        cmd[fla]=j;fla++;
    }
    N=T;
       while(1){
         while(N--){
            scanf("%d",&n);
              if(n==0)
                 break;
       else{
        for(k=1;k<=N;k++){
           and[k]=n;
        }
            for(l=1;l<=N;l++){
               if(cmd[l]!=and[l]){
                flag=0;break;
               }
               // else if(arr[l]!=and[l]){
                  //    flag=0;break;
                //}
                else{flag=1; continue;}
              }

       }
         }
        if(flag==0)
            printf("YES\n");
              else printf("NO\n");

    }
    printf("\n");
}
    return 0;
}
