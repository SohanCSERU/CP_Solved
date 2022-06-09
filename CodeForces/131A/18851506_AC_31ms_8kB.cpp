#include <bits/stdc++.h>
using namespace std;

char lower(char ax)
{
	if(ax<= 'Z' && ax>='A')
	{
		return ax-('Z'-'z');
	}
	return ax;
}

char toUpper(char ab)
{
	if(ab <='z' && ab>='a')
	{
		return ab - ('a' - 'A'); 
	}
	else return ab;
}


int main()
{	
	int cnt=0,T,N,Temp=0;
	string abs;
	cin>>abs;

	for (int i = 1; i < abs.size(); ++i)
	{
		if(abs[i]<='Z' && abs[i]>='A')
		{
			cnt++;
		}		
	}


	if(cnt==(abs.size()-1) && (abs[0]<='z' && abs[0]>='a')) 
	{
		abs[0] = toUpper(abs[0]);

		for (int i = 1; i < abs.size(); ++i)
		{
			abs[i] = lower(abs[i]);
		}
	}
	else if(cnt==(abs.size()-1) && (abs[0]<='Z' && abs[0]>='A')) 
	{

		for (int i = 0; i < abs.size(); ++i)
		{
			abs[i] = lower(abs[i]);
		}
	}

	cout<<abs<<endl;

	return 0;
}