#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,cnt=0,Tmp=0,ax,by;
	int qua;
	//string abs[1005],pad[1005];

	cin>>N;
	string abs[N];
	for (int i = 0; i < N; ++i){
		cin>>abs[i];
	}

	cin>>qua;
	int ara[qua];
	for (int i = 0; i <qua; ++i) ara[i] = 0;
	string pad[qua];
	for (int i = 0; i <qua; ++i){
		cin>>pad[i];
	}

	for (int i = 0; i <qua; ++i){
		for (int k = 0; k <N; ++k){
			if(abs[k]==pad[i])
			{
				ara[i]++;
			}
		}
	}

	for (int i = 0; i <qua; ++i){
		cout<<ara[i]<<endl;
	}
	
	return 0;
}