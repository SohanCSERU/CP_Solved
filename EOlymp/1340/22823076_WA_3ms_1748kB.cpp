#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    freopen("in.txt","r",stdin);

    while (cin>>N)
    {
        for (int i = 1; i <=N*2-1; i++)
        {
            if(i<=N)
                for (int j = 0; j <(N-i); j++)
                    cout<<".";
            else
                for (int k = 0; k <(i-N); k++)
                    cout<<".";
                
                
            if(i<=N)
                 for (int j = 0; j < 2*i-1; j++)
                    cout<<"*";
            else
                for (int k = 0; k < (N*2-1-i)*2+1; k++)
                    cout<<"*";
            cout<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}