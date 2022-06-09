#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,cnt=0;
    int a,b,c;
    cin>>a>>b>>c;
    double pos,neg,coff=0;

    coff = b*b-4*a*c;
    if(coff>=0){
        pos = (-1*b + sqrt(coff))/(2*a);
        neg = (-1*b - sqrt(coff))/(2*a);
    }
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