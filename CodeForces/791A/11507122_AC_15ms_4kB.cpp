#include<iostream>
using namespace std;

int main()
{
    int a,T,m,n,sum=0;
    cin>>m>>n;

    while(n>=m){
       sum++;
       m=m*3;n=n*2;
    }
    cout<<sum<<endl;


    return 0;
}
