#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){

	long long int i,T,N,cnt=0,n,base;
	long double Temp=0,tty=0;
	double abs[1000000];
	abs[0]=0.0;
	for(i=1;i<=1000000;i++){
	  abs[i]=abs[i-1]+log(i);
	} 
    
    cin>>T;
	for(int z=1;z<=T;z++){
	   cin>>n>>base;
      cnt=abs[n]/(abs[base]-abs[base-1]);        
 
      //cout<<"Temporary Variable is : "<<tty<<endl; 
      
       cout<<"Case "<<z<<": "<<cnt+1<<endl;
	Temp=0,cnt=0;
	}

    return 0;
}