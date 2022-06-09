#include <bits/stdc++.h>
using namespace std;

int main()
{
	char abs[1000002],ac;
	int T,N,one=0,Zero=0,cnt=0;
	while(scanf("%s",abs)==1)
	{
		int start,en;
		int Length = strlen(abs);
    
		if(Length == 0) break;
		cin>>N;

		printf("Case %d: \n", ++cnt);
		while(N--)
		{
			cin>>start>>en;
			if(start > en)
			{
        swap(start,en);
			}
			for (int i = start; i <= en ; ++i)
			{
				if(abs[i]=='1')
				{
		          one++;
				}
				if(abs[i]=='0')
				{
        		  Zero++;
        }
			}

			if(one==Zero)
				cout<<"Yes"<<endl;
			else if(one==0 || Zero==0)
				cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;

			Zero=0,one=0;
		}
	}


	return 0;
}
