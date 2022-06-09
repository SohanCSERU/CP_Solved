#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,max=0,temp=0;
	cin>>T;
	int a,b;
	
	while(T--)
	{
		cin>>a>>b;
	temp = a+b;
	
	if(temp>max)
		max = temp;

	}
		cout<<max<<endl;
	return 0;
}