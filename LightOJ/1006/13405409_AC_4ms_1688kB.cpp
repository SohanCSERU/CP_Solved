#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int P,Q,T,Temp=0,cnt=0,N,M;
    long long int abs[10000];
    scanf("%lld",&T);
   
    while(T--){
        scanf("%lld %lld %lld %lld %lld %lld %lld",&abs[0],&abs[1],&abs[2],&abs[3],&abs[4],&abs[5],&N);
      for(int i=6;i<=N ;i++){
        abs[i]=(abs[i-1]+abs[i-2]+abs[i-3]+abs[i-4]+abs[i-5]+abs[i-6])%10000007;
        //cout<<"FOR Checking : "<<abs[i-1]<<endl;
       }
       printf("Case %lld: %lld\n", ++cnt,abs[N]%10000007);
    }
   
    return 0;
}