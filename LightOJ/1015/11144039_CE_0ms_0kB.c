#include<iostream>
using namespace std;
int main(){
	int a,h=1,T,N,cnt=0;
	int flag=1;
	cin>>T;
	while(T--){
		cin>>N;
		while(N--){
			cin>>a;
			if(a > 0)
			 cnt+=a;
		}
		    cout<<"Case "<<h<<": "<<cnt<<endl;
		cnt=0;h++; 
	}
	
	return 0;
}