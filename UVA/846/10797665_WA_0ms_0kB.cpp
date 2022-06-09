#include<iostream>
using namespace std;
int main()
{
	long long int a,b,T,y,x=1,count=0;
	cin>>T;
	while(T--){
		cin>>a>>b;
	b=b-1;
	while(a<=b){
		a=a+x;y=x;
		x++;
		if(a+x>b)
			x--;
			else if(a+y>b)
			   break;
		count++;
	}
	cout<<count<<endl;	
	count=0;
	}
	
	return 0;
}