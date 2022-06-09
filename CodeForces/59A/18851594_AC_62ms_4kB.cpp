#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char x)
{
	if(x>='A' && x<='Z'){
		return 'a' + (x -'A');
	}
	else return x;
}

char touppperCase(char x)
{
	if(x>='a' && x<='z'){
		return 'A' + (x - 'a');
	}
	else return x;
}

int main()
{
	int a,b,abs=0,ab,LowCnt=0,UpCnt=0;
	string str;
	char ch;
	cin>>str;

	for (int i = 0; i < str.size(); ++i){
		ch=str[i];
		if(ch>='A' && ch<='Z'){
			UpCnt++;
		}
		else LowCnt++;
	}

		if(UpCnt >LowCnt){
			for (int i = 0; i <str.size(); ++i){
				cout<<touppperCase(str[i]);
			}
		}
		else{
			for (int i = 0; i <str.size(); ++i){
			    cout<<toLowerCase(str[i]);
			}
		}
	cout<<endl;

	return 0;
}