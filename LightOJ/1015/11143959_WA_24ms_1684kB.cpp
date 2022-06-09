#include<iostream>
using namespace std;
int main(){
	int a,h=1,T,N,cnt=0;
	cin>>T;
	while(T--){
		cin>>N;
		while(N--){
			cin>>a;
			cnt+=a;
		}
		if(cnt<0)
		    cout<<"Case "<<h<<" : "<<0<<endl;
		  else
		    cout<<"Case "<<h<<" : "<<cnt<<endl;
		cnt=0;h++; 
	}
	
	return 0;
}