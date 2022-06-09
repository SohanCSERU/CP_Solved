#include<iostream>
using namespace std;
//typedef long long ll;
int main()
{
    int n,flag=0;
    cin>>n;
    int a[]={4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for(int i=0; i<=13; i++)
    {
        if(n%a[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
