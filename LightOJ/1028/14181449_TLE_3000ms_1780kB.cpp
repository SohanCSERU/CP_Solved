#include <bits/stdc++.h>
using namespace std;
long long int array[10000];

int main()
{
    long long int T,num,N,base,abs=0,cnt=0,Temp=0;
    cin>>T;

    while(T--)
    {
    	stack<int >Tuus;
        scanf("%lld",&num);
	        
      int sqr=sqrt(num);
      
	    for (int i = 1; i <=sqr; i++)
	    {
	     	if(num%i==0)
	     	{
	     	    array[cnt++]=i;
	     	    Tuus.push((num/i));
	     	}
	    }

	    if(Tuus.top()== array[cnt-1]) Tuus.pop();

	     	while(Tuus.size()!=0)
	     	{
	            array[cnt++]=Tuus.top();
	            Tuus.pop();
       }
       printf("Case %lld: %lld\n",++abs,cnt-1);
       //cout<<"Case "<< ++abs <<": "<<cnt-1<<endl;	
        cnt=0;
    }
	return 0;
}	