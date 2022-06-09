#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N,Time,tmp;
	cin>>N>>Time;
	char ch,str[N];

	cin>>str;

	for (int l= 0; l < Time ; l++)
	{
		for (int i = 0; i <N; ++i)
		{
			if(str[i] == 'B' && str[i+1] =='G')
			{
			    ch = str[i];
			    str[i] = str[i+1];
			    str[i+1] =ch;
				i++;
			}
		}
	}
	cout<<str<<endl;



	
	return 0;
}