#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long M=2,N,i,T,a,b,c,sum=0;
    cin>>T;
    while(T--){
     cin>>N;
       for(i=2;i<=N;i++){
            if(i%2==0 && i==M){
                sum=sum-i;
                M=M*2;
            }
            else sum+=i;
            cout<<"SUm is : "<<sum<<endl;
       }
       cout<<sum-1<<endl;
       sum=0;M=2;
    }

    return 0;
}
