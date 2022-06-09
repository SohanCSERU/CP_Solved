#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,cnt=0,Temp=0,ax=0;
	cin>>T;

	while(T--)
	{
		cin>>N;
		int Hold[N];

		for (int i = 0; i < N; ++i)
		{
			cin>>Hold[i];
		}

		int mini;
		for (int i = 0; i < (N-1); ++i)
		{
			mini = i;
			for (int k = i+1; k < N; ++k)
			{
				if(Hold[k] < Hold[mini])
				{
					mini = k;
				}
			}
			if(Hold[mini] < Hold[i])
			{
			   swap(Hold[mini],Hold[i]);
				ax++;
			}
		}
		cout<<"Case "<< ++cnt<<": "<<ax<<endl;
    	ax=0;
    }

	return 0;
}