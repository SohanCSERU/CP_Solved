#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int T,N,M,cnt=0,ax=0,Temp=0,check=0,piazu,exit;
    cin>>T;
    while(T--)
    {
     	vector<long long int >abs;

     	cin>>piazu>>exit;
        Temp=(piazu-exit);
	     printf("Case %lld: ",++ax);
         //cout<<"Case "<< ++ax <<": ";
        if (Temp<=exit || Temp==0)
        {
        	printf("impossible\n");    	
        }
        else
        {
        long long int sqr = sqrt(Temp);
      
	     for (int i = 1; i <=sqr; i++)
	     {
	     	if(Temp%i==0)
	     	{
	     	  if (i>exit)
	     	  {
	     	    abs.push_back(i);
	     	  }
	     	  if((Temp/i)> exit)
	     	  {
	     	     abs.push_back(Temp/i);
	     	  }
	     	}
	     }
         
        sort(abs.begin(),abs.end());

        double aaa;
        aaa=sqrt(Temp);
        if(aaa=sqr)
        {
	       for (int i = 0; i <abs.size(); ++i)
	       {
	       	  if(abs[i]==check)
	       	  	continue;
	       	  else
	           printf("%lld ",abs[i]);
	       	  check=abs[i];
	       }
        	
        }
        else
        {
        	for (int i = 0; i <abs.size(); ++i)
	       {
	           printf("%lld ",abs[i]);
	       }

        }
       
           cout<<endl;
        }
        cnt=0,check=0;
    }
   return 0;
}
