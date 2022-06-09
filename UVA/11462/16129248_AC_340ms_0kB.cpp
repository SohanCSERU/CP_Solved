#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,cnt=0;

	while(scanf("%d",&N),N)
	{
	 
	 int store[N+1],sorted[N+1],mx=0;
		
		for (int i = 0; i < N; ++i)
		{
			cin>>store[i];
			mx = max(mx , store[i]);
		}
		
		int occerance[mx+1];
	    for (int i = 0; i <= (mx+1); ++i) 
	   	    occerance[i] = 0;

		for (int ax = 0; ax < N; ++ax)
		{
			occerance[ store[ax] ]++;
		}

		int Ttf=0,abs=0;
		for (int i = 0; i <= mx; ++i)
		{
			Ttf = occerance[i];
			while(Ttf--)
			{
				sorted[abs] = i;
				abs++;
			}
		}

		//cout<<"Ans after sorted: "<<abs<<endl;
		for (int i = 0; i < (abs-1) ; ++i)
		{
			cout<<sorted[i]<<" ";
		}
		cout<<sorted[abs-1]<<endl;

	}

	return 0;
}