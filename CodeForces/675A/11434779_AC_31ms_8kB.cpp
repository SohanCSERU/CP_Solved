#include<iostream>
using namespace std;

int main()
{
    long a, b, c;
    cin>>a>>b>>c;
    long T,R;
    T=b-a;
    if(!c){
        if(a==b){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    else if(T%c==0 && a<=b && c>0){
       cout<<"YES\n";
    }
   else if(c<0 && a>=b && T%c==0){
        cout<<"YES\n";
   }
   else cout<<"NO\n";
    return 0;
}
