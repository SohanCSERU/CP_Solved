#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,cnt=0,Temp=1,ax;
	string qua;
	char before;
	cin>>T;
	while(T--)
	{
		stack<char >abs;
		cin>>qua;

		if(qua.size()%2==1) {
		    Temp=0;
			break;
		}
		else
		{
		    for (int i = 0; i < qua.size(); ++i){
		    	if(qua[i]=='[' || qua[i]=='(' || qua[i]=='{')
		    	{
		    		abs.push(qua[i]);
		    		continue;
		    	}
		    	else
		    	{
		    		if(abs.size()!=0)
		    		{
		    			if(qua[i]==')')
		    		    {
				   			if(abs.top()== '(')
				   			{
					   			Temp=1;
			    				abs.pop();		   				
				   			}
				   			else
				   			{
				   				Temp=0;
				   				break;
				   			}
		    			}
		    			else if(qua[i]=='}')
		    		    {
				   			if(abs.top()== '{')
				   			{
					   			Temp=1;
			    				abs.pop();		   				
				   			}
				   			else
				   			{
				   				Temp=0;
				   				break;
				   			}
		    			}
		    			else if(qua[i]==']')
		    		    {
				   			if(abs.top()== '[')
				   			{
					   			Temp=1;
			    				abs.pop();		   				
				   			}
				   			else
				   			{
				   				Temp=0;
				   				break;
				   			}
		    			}
		    		}
		    		else
		    		{
		    			Temp=0;
		    			break;
		    		}
		    	}
		    	if(Temp==0)
		    	   break;
			}
		}
		if(Temp && abs.empty()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	Temp=1;
	}	
	
	return 0;
}