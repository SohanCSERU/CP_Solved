#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T;
    long long n,result;
    cin>>T;
    while(T--){
        cin>>n;
        int d=log2(n);
        d=pow(2,d);
        result=)(n*(n+1)/2)-(4*d-2);
        cout<<result<<endl;
    }

    return 0;
}
