#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int M,N,cnt=0,Temp=0,mx=0;
	int hold[10001];
    int occerance[10001],abs=0;
	int array[101][101];
	while(1)
	{
		scanf("%d %d",&M,&N);
		if(M==0 &&N==0) break;

		for (int i = 0; i < M; ++i)
		{
			for (int k = 0; k < N; ++k)
			{
				cin>>array[i][k];
				mx = max(array[i][k],mx);
			}
		}
		//cout<<"Max is: "<<mx<<endl;


		for (int i = 0; i <=mx; ++i) occerance[i]=0;

		for (int i = 0; i < M; ++i)
		{
			for (int k = 0; k < N; ++k)
			{
				occerance[ array[i][k] ] ++;
			}
		}


		for (int ax = 0; ax <= mx; ++ax)
		{
			int mini = 10005;
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
					occerance[k] = 12000;
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