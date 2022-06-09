#include <bits/stdc++.h>
using namespace std;
int array[1000];
int main()
{
    long long int T,N,M,cnt=0,ax=0,Temp=0,check=0,piazu,exit;
    cin>>T;
     while(T--)
     {
     	stack<int >abs;
        cin>>piazu>>exit;
        Temp=(piazu-exit);
        int sqr=sqrt(Temp);
      
	     for (int i = 1; i <=sqr; i++)
	     {
	     	if(Temp%i==0)
	     	{
	     	    array[cnt++]=i;
	     	    abs.push((Temp/i));
	     	}
	     }

	     	while(abs.size()!=0)
	     	{
	            if(abs.top()!=array[cnt-1])
	            {
	                array[cnt++]=abs.top();
	                abs.pop();
	            }
	            else abs.pop();
           }

         cout<<"Case "<< ++ax <<": ";
        for (int i = 0; i <cnt; ++i)
        {   
           if(array[i]>exit)
           {
        	 cout<<array[i]<<" ";
        	 check++;
           }
        	else continue;
        }
        if(check==0)
        	cout<<"impossible";
        cout<<endl;
       cnt=0,check=0;
    }
   return 0;
}
