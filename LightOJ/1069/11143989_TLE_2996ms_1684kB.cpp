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
			if(a > 99){
				flag=0;break;
				}
			cnt+=a;
		}
		if(cnt<0 || flag==0)
		    cout<<"Case "<<h<<": "<<0<<endl;
		  else
		    cout<<"Case "<<h<<": "<<cnt<<endl;
		cnt=0;h++;flag=1; 
	}
	
	return 0;
}