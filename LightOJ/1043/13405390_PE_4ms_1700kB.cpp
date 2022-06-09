#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int T,cnt=0,Tem=6;
	double a,b,c,d,S=0,abc=0,tt=0,aa=0;
    cin>>T;  
    while(T--)
    {
    
       cin>>a>>b>>c>>aa;
    abc=aa/(1+aa);
    abc=sqrt(abc);
    tt=abc*c;

    S=(tt*a)/c;
    
    std::cout<< std::fixed;
    std::cout<< std::setprecision(Tem++);

    cout<<"Case "<< ++cnt <<": "<<S<<endl;
    //cout<<"The height: "<<tt<<" "<<"Area Of Trapizium: "<<aa<<endl;
    
    }

	return 0;
}