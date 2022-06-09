#include <bits/stdc++.h>
using namespace std;

long long int consi(long long int N)
{
	long  long cnt = 0;
	long double ax = 0.0;
	for (long long L = 1; L * (L+1) < 2*N ; L++)
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
		long long N;
		cin>>N;
		cout<<"Case "<<++Temp<<": "<<consi(N)<<endl;
	}

	return 0;
}