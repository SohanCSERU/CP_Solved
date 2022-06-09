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


	//cout<<input.size()<<endl;
	if(ch=='R')
	{
		for (int i = 0; i < input.size(); i++)
		{
		    for (int k = 0; k < 30; ++k)
		    {
		    	if(input[i]==abs[k])
		    	{
		    		input[i]=abs[k-1];
		    	}
		    }
		}
    }
    else if(ch=='L')
    {
		for (int i = 0; i < input.size(); i++)
		{
		    for (int k = 0; k < 30; ++k)
		    {
		    	if(input[i]==abs[k])
		    	{
		    		input[i]=abs[k+1];
		    	}
		    }
		}
    }	
    cout<<input<<endl;


	return 0;
}