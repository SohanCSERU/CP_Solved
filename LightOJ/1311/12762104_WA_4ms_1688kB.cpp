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
       double t1,t2,tt=0;
       t1=v1/a1;
       t2=v2/a2;
       tt=max(t1,t2);
       
      
       abs= tt*v3;
 
       std::cout<< std::fixed;
       std::cout<< std::setprecision(10);

    cout<<"The S1 and S2 is:"<<s1<<" "<<s2<<endl;
    cout<<"Case "<<l<<": "<<s1+s2<<" "<<abs<<endl;
    //printf("%0.8lf \n",abs);
    abs=0;
   }

    return 0;
}