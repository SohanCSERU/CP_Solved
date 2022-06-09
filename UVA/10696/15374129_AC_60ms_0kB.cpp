#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,cnt=0,Temp=0,ax=0;

    while(scanf("%d",&N)==1 && N!=0)
    {
      if(N>100)
         ax=N-10;
    
    else
        ax=91;
    
      printf("f91(%d) = %d\n",N,ax);
    }


	return 0;
}