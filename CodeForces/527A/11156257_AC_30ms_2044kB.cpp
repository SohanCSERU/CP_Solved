#include<iostream>
using namespace std;

int main(){
	long long int T,m,n,N=1,temp=0,cnt=0;
	cin>>m>>n;
	long long int ans,abs;
	while(m>0 && n>0){
		ans=m/n;T=n;
		temp=m;m=n;
		n=temp-ans*T;
		cnt=cnt+ans;
	}
	cout<<cnt<<endl;
	
	return 0;
}