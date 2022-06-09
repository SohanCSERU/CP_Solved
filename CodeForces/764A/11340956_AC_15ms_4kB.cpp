#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,T,N,n,m,cnt=0;
    cin>>n>>m>>T;
    if(m!=0){
    for(int i=n;i<=T;i=i+n){
        if(i%m==0)
           cnt++;
    }
    cout<<cnt<<endl;
    cnt=0;
}
    return 0;
}
