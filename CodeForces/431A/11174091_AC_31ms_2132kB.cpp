#include<iostream>
#include<cstdlib>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,T=0,N;
	int arr[5];
	arr[0]=0;
	
	for(int i=1;i<=4;i++){
		cin>>arr[i];
	}
	char s[100005];
	cin>>s;
	for(int i=0;i<strlen(s);i++){
		char x='0';N=s[i]-x;
		T += arr[N];
	}
	cout<<T<<endl;
	return 0;
}