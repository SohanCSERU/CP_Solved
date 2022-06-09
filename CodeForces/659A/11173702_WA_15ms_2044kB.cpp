#include<iostream>
using namespace std;
int main()
{
	int N,a,b,sum=0,ans=0,ant=0,T,i;
	cin>>N>>a>>b;
	if(b<0){ 
	b=b*-1; ant=b%N;
	 ans=N-ant+a;
	  if(ans>N){
	  	ans=ans%N;
	  }
   }
	
	else if(b>0){
		ant=b%N;
	ans=ant+a;
	}
	
	cout<<ans<<endl;
	
	return 0;
}