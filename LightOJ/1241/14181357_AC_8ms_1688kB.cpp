#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,N,T,cnt=0,sum=0,Temp=0,check=0;
    int ary[10];
    cin>>T;
    while(T--)
    {
       cin>>N;
      for (int i = 1; i <(N+1); ++i)
      {
      	cin>>ary[i];
      }

      ary[0]=2;
      
      for (int i = 0; i < N; ++i)
      {
      	if(ary[i+1]>ary[i])
      	{
	      	if((ary[i+1]-ary[i])>5)
	      	{
	      	 sum+= ceil((ary[i+1]-ary[i])/5.0);
	      	}
	      	else
	      	{ 
	      		sum++;
	      	}
      	}
      }
     cout<<"Case "<< ++cnt <<": "<<sum<<endl;
     sum=0;
    }


	return 0;
}