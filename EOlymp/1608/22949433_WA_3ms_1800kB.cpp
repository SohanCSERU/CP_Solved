#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,Ncpy,cnt=0,newN=0;
    cin>>N;
    Ncpy = N;

    while (Ncpy)
    {
        newN = newN*10+Ncpy%10;
        Ncpy/=10;
    }
    
    if(newN==N) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}