#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int cnt=0,T;
	double a,N,M=0,Tpa=0,wik=0,kid=0;
	double r1,r2,H,p;
	cin>>T;
	while(T--){
	    cin>>r1>>r2>>H>>p;
		Tpa=r1-r2;
		wik=Tpa/H; kid=r2+wik*p;
		a=r2/wik;
		//cout<<"Wik : "<<wik<<" "<<"Kid : "<<kid<<" a= "<<a<<" H= "<<H<<endl;
	
	double pi,abs=0;		
	pi=2*acos(0.0);
	abs=(pi/3)*kid*kid*(a+p)-(pi/3)*r2*r2*a;
	std::cout<<std::fixed;
	std::cout<<std::setprecision(9);

	cout<<"Case "<< ++cnt <<": "<<abs<<endl;
	
	}
	
	
	return 0;
}