#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    double v1,v2,v3,a1,a2,s1,s2,sum=0,abs=0;
    int T;
    cin>>T;
    for(int l=1;l<=T;l++){
       cin>>v1>>v2>>v3>>a1>>a2;
      
      s1=(v1*v1)/(2*a1);
      s2=(v2*v2)/(2*a2);
      abs=s1/v1;
      abs=2*abs*v3;
 
       std::cout<< std::fixed;
       std::cout<< std::setprecision(8);

    //cout<<"The S1 and S2 is:"<<s1<<" "<<s2<<endl;
    cout<<"Case "<<l<<": "<<s1+s2<<" ";
    printf("%0.1ld\n",abs);
    abs=0;
   }

    return 0;
}