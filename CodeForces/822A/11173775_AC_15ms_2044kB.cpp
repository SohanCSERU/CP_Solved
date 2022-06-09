#include <iostream>
#include<cmath>
using namespace std;
int main(){
    
    int i,a,b,ans=0;
    cin>>a>>b;
    ans=min(a,b);
	long long int n1=1,n2=1;
    
    for(i=1; i<=ans; ++i) { 
        n1 =n1*i;
        }
    
    cout <<n1;
      
   return 0;
}