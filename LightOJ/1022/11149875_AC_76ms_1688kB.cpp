#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int h=1;
	double T,L,CA,ans,cnt=0,i;
	cin>>T;
	while(T--){
	double R;
	cin>>R;
	ans=R*2;ans=ans*ans;
	double pi=2*acos(0.0);
	L=pi*R*R;
	CA=ans-L;
	printf("Case %d: %0.2lf\n",h,CA);	
	h++;cnt=0;
}
	
	
	return 0;
}