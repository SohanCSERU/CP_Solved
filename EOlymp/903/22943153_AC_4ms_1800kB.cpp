#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int first,last;
        cin>>N;

        first=N/100;
        last=N%10;
        
        if(first>last) cout<<first<<endl;
        else if(last>first) cout<<last<<endl;
        else cout<<"="<<endl;
   
    return 0;
}