#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
	char abs[1000015];
	int T,N,cnt=0;
	while(scanf("%s",abs)==1)
	{
		int start,en,check=0;

	  if(strcmp(abs,"\n")==0)
      break;

    scanf("%d",&N);
		printf("Case %d: \n", ++cnt);
		while(N--)
		{
      scanf("%d %d",&start,&en);
			if(start > en)
			{
        swap(start,en);
			}
			//cout<<start<<" "<<en<<endl;
			if(start==en)
			{
				cout<<"Yes"<<endl;
				continue;
			}
			for (int i = start; i < en ; ++i)
			{
				 if(abs[i]==abs[i+1])
				 {
				 	 check=1;
				 }
				 else
				 {
				 	 check=0;
				 	 break;
				 }
			}

			if(check)
				cout<<"Yes"<<endl;
			else
        cout<<"No"<<endl;
		}
	}


	return 0;
}
