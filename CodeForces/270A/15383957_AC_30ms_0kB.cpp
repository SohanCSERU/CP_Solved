#include <bits/stdc++.h>
using namespace std;
 
 int main()
 {
 	int T,N,cnt=0,Temp=0;
 	cin>>T;

 	while(T--)
 	{
 		cin>>N;
 		if(360%(180-N)==0)
 		    cout<<"YES"<<endl;
 		else 
 		    cout<<"NO"<<endl;
 	}

 	return 0;
 }