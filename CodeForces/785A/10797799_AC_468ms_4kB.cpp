#include<iostream>
using namespace std;
int main()
{
int t,cnt=0;
string X;
cin >> t;

	for(int i=0;i<t;i++){
	cin>>X;			   
	if(X[0]=='T')
	cnt += 4;
	else if(X[0]=='C')
	cnt += 6;
	else if(X[0]=='O')
    	cnt += 8;
	else if(X[0]=='D')
	cnt += 12;
	else if(X[0]=='I')
	cnt += 20;
}
	cout << cnt << endl;

	return 0;
}