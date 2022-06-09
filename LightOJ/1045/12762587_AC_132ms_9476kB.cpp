#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){

	long long int i,T,N,cnt=0,n,base;
	long double Temp=0,tty=0;
	double abs[1000001];
	abs[0]=0.0;
	for(i=1;i<=1000000;i++){
	  abs[i]=abs[i-1]+log10(i);
	} 
    
    scanf("%lld",&T);
	for(int z=1;z<=T;z++){
	   scanf("%lld %lld",&n,&base);
	   
        cnt = abs[n]/log10(base);         
      
      printf("Case %d: %lld\n",z,cnt+1);
      //cout<<"Case "<<z<<": "<<cnt+1<<endl;
	cnt=0;
	}

    return 0;
}