#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k,l,m,n,d,T,cnt,Tmp=0;
	cin>>k>>l>>m>>n>>d;
	int arr[d+5];

	for (int i = 1; i <=d; ++i){
		arr[i]=0;
	}

	for (int i = 1; i <=d; ++i){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
			arr[i] = 1;
		}
	}
	for (int i = 1; i <=d; ++i){
		if(arr[i]==1) Tmp++;
	}
	cout<<Tmp<<endl;

	return 0;
}