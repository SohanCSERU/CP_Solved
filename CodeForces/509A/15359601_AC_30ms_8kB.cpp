#include <bits/stdc++.h>
using namespace std;

int main()
{

	int a,b,T,c,cnt=0,abs=0,Temp=0;
	int arr[11][11];

	for(int i=0;i<11;i++)
	{
		for (int j = 0; j < 11; ++j)
		{
			if(i==0 || j==0)
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j] = arr[i-1][j]+arr[i][j-1];
			}
		}
	}

	cin>>T;
	cout<<arr[T-1][T-1]<<endl;


	return 0;
}