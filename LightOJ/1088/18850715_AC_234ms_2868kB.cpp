#include <bits/stdc++.h>
using namespace std;
long long int Bucket[100005];
 
int Lower(long long int abs,int T)
{
    long long int mid=0,low=1,high=T;
    while(low<=high)
    {
      mid=(low+high)/2;
 
        if(Bucket[mid]==abs)
        {
           low=mid;
           break;
        }
        else if(Bucket[mid]>abs)
            high=mid-1;
         else
          low =mid+1;
      //cout<<"Low: "<<low<<" High "<<high<<" Mid "<<mid<<endl;
    }
    return low;
}
 
int uper(long long int abs,int T)
{
    long long int mid=0,low=1,high=T;
    while(low<=high)
    {
      mid=(low+high)/2;
 
        if(Bucket[mid]>abs)
            high=mid-1;
         else
          low =mid+1;
      //cout<<"Low: "<<low<<" High "<<high<<" Mid "<<mid<<endl;
    }
    return low;
}
 
 
/*The main function start Successfully.*/
int main()
{
    long long int uPER=0,cnt=0,LO=0,Enq1,Enq2;
    int XX,T,N,tty=0;
    cin>>XX;
      while(XX--)
      {
        scanf("%d %d",&T,&N);
        for (int i = 1; i <=T; i++ )
        {
           scanf("%lld",&Bucket[i] );
        }
        printf("Case %d:\n",++tty);
        while(N--)
        {
            scanf("%lld%lld",&Enq1,&Enq2);
            LO = Lower(Enq1,T);
            uPER = uper(Enq2,T);
         
           //cout<<"Case "<< ++cnt <<": "<<(abs-Temp)+1<<endl;
          printf("%lld\n",uPER-LO);
        }
      }
 
    return 0;
} 