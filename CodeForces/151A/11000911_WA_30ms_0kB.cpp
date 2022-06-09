#include<iostream>
#include<algorithm>
using namespace std;

main()
{
    int n,k,l,c,d,p,nl,np;
    int T,N,R;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    if(n!=0 && np!=0){
    T=(l*k)/n;
    N=c*d;
    R=p/np;
    int result=min(min(T,N),R);
    result=result/n;

    cout<<result<<endl;
    }

    return 0;
}
