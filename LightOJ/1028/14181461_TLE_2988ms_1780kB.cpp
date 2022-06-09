#include <bits/stdc++.h>
using namespace std;
long long int array[10000];

int main()
{
    long long int T,num,N,cnt=0,Temp=0;
    int top=0,abs=0;
    cin>>T;

    while(T--)
    {
      scanf("%lld",&num);
	        
      int sqr=sqrt(num);
      
	    for (int i = 1; i <=sqr; i++)
	    {
	     	if(num%i==0)
	     	{
	     	    array[cnt++]=i;
	     	    top+=2;
	     	}
	    }

	    double XX;
	    XX = sqrt(num);
	    if(XX==sqr) top--;

       printf("Case %d: %d\n",++abs,top-1);
       //cout<<"Case "<< ++abs <<": "<<cnt-1<<endl;	
        top=0;
    }
	return 0;
}	