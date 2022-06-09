#include<iostream>
using namespace std;

int main()
{
    int a,T,b,c,m,n;
    cin>>a>>b>>c;
    T=(b-a);

    if(c==0 && a==b){cout<<"YES\n";}
    else if(T%c==0 && c>0 && b>0){
        cout<<"YES\n";
    }
    else if(b<0 && c<0 && T%c==0){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

    return 0;
}
