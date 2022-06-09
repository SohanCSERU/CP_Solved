#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N,Time=0,tmp[1000];
	string str;
	cin>>str;

	for (int i = 0; i <str.size(); ++i)
	{
		if (str[i]=='.'){
			tmp[Time++] = 0;
		}
		else if(str[i]=='-' && str[i+1]=='.'){
			tmp[Time++]=1;i++;
		}
		else if (str[i]=='-' && str[i+1]=='-'){
			tmp[Time++] = 2;i++;
		}
	}

	for (int i = 0; i <Time; ++i){		
		cout<<tmp[i];
	}
		cout<<endl;
	
	return 0;
}