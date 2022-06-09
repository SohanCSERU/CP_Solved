#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){

	long long int i,T,N,cnt=0,n,base;
	cin>>T;
        long double Temp=0,tty=0;
	for(int z=1;z<=T;z++){
	cin>>n>>base;
        double abs[n];
       abs[0]=0.0;Temp=log(base);  
       for(i=1;i<=n;i++){
	  abs[i]=abs[i-1]+log(i)/Temp;
	  //cout<<"THE Tempory is: "<<abs[i]<<endl;
	} 
	tty=abs[n];
      //cout<<"Temporary Variable is : "<<tty<<endl; 
     
/*
       std::cout<< std::fixed;
       std::cout<< std::setprecision(0);
*/
       cout<<"Case "<<z<<": "<<(int)tty+1<<endl;
	Temp=0,tty=0;
	}

    return 0;
}