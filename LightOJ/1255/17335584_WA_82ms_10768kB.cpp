#include <bits/stdc++.h>
using namespace std;
#define MAX 1000006
int value[MAX];

void kMP_FUNC(string pattern)
{
	memset(value,0,sizeof(value));

	value[0] = 0;
	int j = 0;
	for (int i = 1; i < pattern.size(); ++i){
		if(pattern[i]==pattern[j]){
			value[i] =j+1;
			j++;
		}
		else
		{
			while(j!=0)
			{
				j=value[j-1];
				if(pattern[i]==pattern[j]){
					value[i] = j+1;
					j++;
					break;
				}
			}
		}
		
	}
}

int kmp(string pat, string txt) 
{ 
	int cnt=0;
    int M = pat.size(); 
    int N = txt.size(); 
 	kMP_FUNC(txt);

    int i = 0;  
    int j = 0; 
    while (i < N) { 
        if (pat[j] == txt[i]) { 
            j++; 
            i++; 
        } 
        if (j == M) { 
            //printf("Found pattern at index %d ", i - j); 
            cnt++;
            j = value[j-1]; 
        } 
        else if (i < N && pat[j] != txt[i]) { 
            if (j != 0) 
                j = value[j-1]; 
            else
                i = i + 1; 
        } 
    } 
    return cnt;
} 
int main()
{
	int T,N,ax=0,sum=0,ans=0;
	scanf("%d",&T);
	while(T--)
	{
		char abs[MAX],match[MAX];
		//cin>>abs>>match;
		scanf("%s %s",abs,match);
		ans = kmp(match,abs);
		
		printf("Case %d: %d\n",++ax,ans);
		//cout<<"Case "<< ++ax <<": "<<ans<<endl;
	}
	return 0;
}