#include<iostream>
using namespace std;
int main(){
	int a,h=0,T,N,cnt=0;
	cin>>T;
	while(T--){
		cin>>N;
		while(N--){
			cin>>a;
			cnt+=a;h++;
		}
		cout<<"Case "<<h<<": "<<cnt<<endl;
		cnt=0;h=0; 
	}
	
	return 0;
}