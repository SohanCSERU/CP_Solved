#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,cnt=0,Temp=0,ax=0;
	char abs[30]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
	string input,push;
	char ch;
	
	cin>>ch;
	cin>>input;


	if(ch=='R')
	{
		for (int i = 0; i < input.size(); i++)
		{
		    for (int k = 0; k < 30; ++k)
		    {
		    	if(input[i]==abs[k])
		    	{
		    		cout<<abs[k-1];
		    	}
		    }
		}
		cout<<endl;
    }
    else if(ch=='L')
    {
		for (int j = 0; j < input.size(); j++)
		{
		    for (int k = 0; k < 30; k++)
		    {
		    	if(input[j]==abs[k])
		    	{
		    		cout<<abs[k+1];
		    	}
		    }
		}
		cout<<endl;
    }
    
	return 0;
}
