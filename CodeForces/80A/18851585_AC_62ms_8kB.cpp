#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N,M,cnt=1,check=0;
	bool prime[100];
	prime[1]=0;
	
	cin>>N>>M;
	for (int i = 2; i <=M; ++i){
		for (int j =2; j <=(i/2); ++j){
			if(i%j==0){
				cnt=0;
				break;
			}
			else cnt=1;
		}
		if(cnt==0)
			prime[i]=0;
		else 
			prime[i]=1;
	}

	for(int i = N+1; i <=M; ++i){
		if(prime[i]==1 && i<M){
			check=0;
			break;
		}
		else check=1;
	}
	if (check==1 && prime[M]==1){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
	
	return 0;
}