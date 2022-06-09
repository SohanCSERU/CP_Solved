#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,cnt=0,Temp=0,ax=0;
	double Test;
	cin>>T;

	while(T--)
	{
		cin>>N;
		ax=sqrt(N);
		for (int i = 2; i <= ax; ++i)
		{
			if(N%i==0)
			{
				Temp+=i;
				Temp+=(N/i);
			}
		}
		Test=sqrt(N);
		if(ax==Test)
			Temp-=ax;
    
    cout<<Temp+1<<endl;

    Temp=0;
	}





	return 0;
}