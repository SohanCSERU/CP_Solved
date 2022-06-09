#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n%10==n/100){
        cout<<"="<<endl;
    }else if(n%10 > n/100){
        cout<<n%10<<endl;
    }else{
        cout<<n/100<<endl;
    }

    return 0;
}