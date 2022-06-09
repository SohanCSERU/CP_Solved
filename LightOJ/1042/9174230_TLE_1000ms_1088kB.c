#include<stdio.h>
#include<math.h>

int main()
{
    int T,i,j,k;
    long long int co=0,t,y,N,n,x,c,count=0,test=0;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    scanf("%lld",&N);n=N;
      while(n !=0){
        x=n%2;
        n=n/2;
        if(x==1)
            count++;
      }
      printf("%lld\n",count);
      co=count;n=N+1;

     while(1){
     n=27,t=n;
      while(n !=0){
        y=n%2;
        n=n/2;
        if(y==1)
            test++;
      }
      if(count != test)
        N++;
        else{
          printf("Case %d: %lld\n",i,t);
        }
            t=0;
     }
      n=0,N=0,count=0;t=0,test=0,y=0;
     }
    return 0;
}
