#include <bits/stdc++.h>
using namespace std;

int isOPerator(char ch)
{
    if(ch =='+' || ch =='-' || ch=='*')
        return 1;
    else return 0;
}
int main()
{
    int N,cnt=0;
    string str;
    cin>>str;

    for (int i = 0; i < str.size(); i++)
    {
        if((str[i]=='-' || str[i]=='+') && i==0)
            continue;
        else if(isOPerator(str[i]))
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
 
    return 0;
}