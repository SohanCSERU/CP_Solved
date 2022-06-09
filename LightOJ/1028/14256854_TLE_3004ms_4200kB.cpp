	#include <bits/stdc++.h>
	using namespace std;
	bool marked[1000009];
	typedef long long int LL;
	LL Max=1000009;
	vector<LL > prime;

	void sieve(LL MX)
	{
		marked[1]=true;
		for (LL i = 4; i <=MX; i+=2)
		{
			marked[i]=true;
		}

		for (LL i = 3; i*i <= MX ; i+=2)
		{
			if(marked[i]==false)
			{
				for (LL k = i*i; k <=MX ; k+=2*i)
				{
					marked[k]=true;	
			    }
			}
		}
	    for(LL k=1; k<=Max; k++)
		{
			if(marked[k]==false)
			{
		    	prime.push_back(k);
			}
		}

	}


	int FindFactor(LL N)
	{
		LL divisor=1;
		for (LL i = 0; i <prime.size(); i++)
		{
		   if(N<prime[i])
				break;
		   if(N % prime[i]==0)
		   {
			   LL cnt=1;
			   while( N % prime[i]==0)
			   {
			   	   N/=prime[i];
			   	   cnt++;
			   }
		       divisor*=cnt;
		   }
	   }
	   if(N>1) 
	   	 divisor*=2;

		return divisor;
	}

	   

	int main()
	{
	   long long int sum,abs,N;
	   int cnt=0,T ;
	   sieve(Max);
	    
	    scanf("%d",&T);
	    while(T--)
	    {
	       scanf("%lld",&N);
	    		
		sum=FindFactor(N);
	    printf("Case %d: %lld\n", ++cnt,sum-1); 
	   // cout<<"Divisor Number is : "<<sum-1<<endl;
		  
	    }
	   return 0;
	}
