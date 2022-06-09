#include <bits/stdc++.h>
using namespace std;
long long int array[2000];
int main()
{
    long long int T,N,M,cnt=0,ax=0,Temp=0,check=0,piazu,exit;
    cin>>T;
    while(T--)
    {
     	stack<long long int >abs;

     	cin>>piazu>>exit;
        Temp=(piazu-exit);
	     printf("Case %lld: ",++ax);
         //cout<<"Case "<< ++ax <<": ";
        if (Temp<=exit)
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
	     	     array[cnt++]=i;
	     	  }
	     	  if((Temp/i)> exit)
	     	     abs.push(Temp/i);
	     	}
	     }

        double aaa;
        aaa=sqrt(Temp);
        if(sqr==aaa && array[cnt-1]==aaa)
        {
        	cnt--;
        } 
        for (int i = 0; i <cnt; i++)
        {   
        	 cout<<array[i]<<" ";
        }
        
        while(abs.size()!=0)
        {
        	cout<<abs.top()<<" ";
        	if(abs.size()!=0) abs.pop();
        }
           cout<<endl;
        }
        cnt=0,check=0;
    }
   return 0;
}
