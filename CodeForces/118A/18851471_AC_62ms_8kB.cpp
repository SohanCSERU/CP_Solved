#include <bits/stdc++.h>
using namespace std;

int check(char ab)
{
	
	 if(ab == 'a' || ab == 'o' || ab == 'y' || ab == 'e' || ab == 'u' || ab == 'i')
	{
		return 1;
	}
	else
	 return -1;
}
char lower(char ax)
{
	if(ax<= 'Z' && ax>='A')
	{
		return ax-('Z'-'z');
	}
	return ax;
}


int main()
{
	int T,N,cnt=0;
	string abs,input;
	char ch='S';
	cin>>abs;

	for (int i = 0; i < abs.size(); ++i)
	{
		ch = lower(abs[i]);
		if(check(ch) == -1) 
			cout<<"."<<ch;
	}
	cout<<endl;

	return 0;
}