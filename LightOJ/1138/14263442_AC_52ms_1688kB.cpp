#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

LL FindFactor(LL N)
{
	LL count=0;
	for (LL i = 5; N/i >=1 ; i*=5)
	{
		count+=N/i;
	}
	return count;
}

LL Bisection(LL N)
{
     LL start=0,mid=0;
     LL end=5*N;
     if(N==1) 
     	return 5;

    while(start<=end)
    {
    	mid = (start+end)/2;
    	
    	if(mid%5!=0) 
    	   mid = mid-2;

    	if(FindFactor(mid)==N)
    		return mid;
    	else if(FindFactor(mid)>N)
    		end=mid-5;
    	else 
    		start=mid+5;
    	
    	//cout<<"START : "<<start<<" End: "<<end<<" MID: "<<mid<<endl;
    }
    
    return -1;
}

int main()
{
	long long int abs=0,cnt=0,T,N,tty=0,ans=0,check=0;
	cin>>T;
	while(T--)
	{
       //cin>>N;
        scanf("%lld",&N);
        ans = Bisection(N);
        if(ans==-1)
        	printf("Case %lld: impossible\n",++cnt);
        else
           printf("Case %lld: %lld\n",++cnt,ans);  
      
      //cout<<Bisection(N)<<endl;
     
	}

	return 0;
}