#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    int T,N,R;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    T=(l*k)/nl;
    N=c*d;
    R=p/np;
    int result=min(min(T,N),R);
    result=result/n;
    cout<<result<<endl;

    return 0;
}
