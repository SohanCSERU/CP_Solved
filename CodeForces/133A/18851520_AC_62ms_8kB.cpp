#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,ac,N,cnt=0;
	string abs;
	cin>>abs;

	for (int i = 0; i < abs.size(); ++i)
	{
		if(abs[i] == 'H' || abs[i] == 'Q' || abs[i] == '9')
		{
			cnt=1;
			break;
		}
	}
	
	if(cnt)
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	return 0;
}