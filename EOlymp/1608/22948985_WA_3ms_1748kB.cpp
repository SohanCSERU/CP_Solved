#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,cnt=0;
    cin>>N;
    string str= to_string(N);
    int sz = str.size();
    int check=1;

    if(sz%2==0)
    {
        for (int i = 0; i <sz/2; i++)
        {
            if(str[sz/2-i-1]==str[sz/2+i])
                check=1;
            else
            {
                check=0;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i <sz/2; i++)
        {
            if(str[sz/2-i-1]==str[sz/2+i+1])
                check=1;
            else
            {
                check=0;
                break;
            }
        }
    }
    if(check) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
    return 0;
}