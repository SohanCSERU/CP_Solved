#include <bits/stdc++.h>
using namespace std;

int consi(long int N)
{
	long int cnt = 0;
	double ax = 0.0;
	for (long int L = 1; L * (L+1) < 2*N ; L++)
	{
		ax = (1.0 * N - (L*(L+1))/2) / (L+1);

	    if(ax -(int)ax == 0.0)   cnt++;
	}
	return cnt;
}


int main()
{
	int T,N,cnt=0,Temp=0;
	cin>>T;

	while(T--)
	{
		long int N;
		cin>>N;
		cout<<"Case "<<++Temp<<": "<<consi(N)<<endl;
	}

	return 0;
}