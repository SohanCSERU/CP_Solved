#include<iostream>
using namespace std;

int main(){
	int T,L,Me,h=1,Time,cnt=0,i;
	cin>>T;
	while(T--){
	cin>>Me;
	cin>>L;
	if(Me !=0 || L!=0){
	int x=Me-L;
		if(x<0) x=x*(-1);
		cnt=Me*4+10+9+x*4;
	}
	cout<<"Case "<<h<<": "<<cnt<<endl;	
	h++;cnt=0;
}
	
	
	return 0;
}