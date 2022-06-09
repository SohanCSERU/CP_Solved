#include <bits/stdc++.h>
using namespace std;

int main()
{
	int M,N,cnt=0,Temp=0;
	while(1)
	{
		scanf("%d %d",&M,&N);
		if(M==0 &&N==0) break;

		int array[M][N],mx=0;
		for (int i = 0; i < M; ++i)
		{
			for (int k = 0; k < N; ++k)
			{
				cin>>array[i][k];
				mx = max(array[i][k],mx);
			}
		}
		//cout<<"Max is: "<<mx<<endl;

		int occerance[mx+1],abs=0;
		for (int i = 0; i <=mx; ++i) occerance[i]=0;

		for (int i = 0; i < M; ++i)
		{
			for (int k = 0; k < N; ++k)
			{
				occerance[ array[i][k] ] ++;
			}
		}

		int hold[mx+1];

		for (int ax = 0; ax <= mx; ++ax)
		{
			int mini = 1001;
			for (int i = 0; i <=mx; ++i)
			{
				if(occerance[i]<mini && occerance[i] !=0 )
				{
					mini = occerance[i];
				}
			}
			for (int k = 0; k <= mx; ++k)
			{
				if(occerance[k] == mini)
				{
					hold[cnt++] = k; 
					occerance[k] = 1200;
				}
			}
			
		}
		//cout<<"Ans is: "<<endl;
		for (int i = 0; i < cnt; ++i)
		{
			cout<<hold[i]<<" ";
		}
		cout<<endl;

		cnt=0,mx=0;

		//while end
	}

	return 0;
}	