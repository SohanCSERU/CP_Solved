#include <iostream>
using namespace std;
int main(){
    
   long long int i,a,n1=1,n2=1,b,ans=0;
    cin>>a>>b;
    for(i=1; i<=a; ++i) { 
        n1 =n1*i;
        }
    for(i=1; i<=b; ++i) { 
        n2 *=i;
        }
    while(n1 != n2){ 
        if(n1 > n2)
           n1 -= n2;
        else n2 -= n1;
        } 
    cout <<n1;
      
   return 0;
}