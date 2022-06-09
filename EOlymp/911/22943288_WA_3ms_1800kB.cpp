#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,cnt=0;
    int a,b,c;
    cin>>a>>b>>c;
    int pos,neg,coff=0;

    coff = sqrt(b*b-4*a*c);
    pos = (-1*b + coff)/2*a;
    neg = (-1*b - coff)/2*a;

    if(coff<0)
    {
        cout<<"No roots"<<endl;
    }
    else if(coff==0)
    {
        cout<<"One root: "<<pos<<endl;
    }
    else 
    {
        cout<<"Two roots: "<<neg<<" "<<pos<<endl;
    }
    
    return 0;
}