#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,Mis,Cri,cnt=0,Temp=0,ax=0;
	cin>>T;

	while(T--)
	{
		cin>>Mis>>Cri;

	if(Mis>Cri) 
		cnt++;
	else if(Mis<Cri) 
		Temp++;
     
	}
	if(Temp>cnt) 
		cout<<"Chris"<<endl;
	else if(cnt>Temp)
		cout<<"Mishka"<<endl;
	else 
		cout<<"Friendship is magic!^^"<<endl;

	return 0;
}