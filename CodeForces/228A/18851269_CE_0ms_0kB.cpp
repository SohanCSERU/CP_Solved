 By SohanToTo, contest: Codeforces Round #141 (Div. 2), problem: (A) Is your horseshoe on the other hoof?, Compilation error, #

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N=4,cnt=0;
	int arr[N],visited[N];

	for (int i = 0; i < N; ++i){
		cin>>arr[i];	
	}
	for (int i = 0; i < N; ++i) visited[i] = 0;

	for (int i = 0; i <N; ++i){
		for (int j = i+1; j < N; ++j){
			if (arr[i]==arr[j] && visited[j]==0){
				cnt++;
				visited[j]=1;
			}
		}
	}
	cout<<cnt<<endl;
	
	return 0;
}