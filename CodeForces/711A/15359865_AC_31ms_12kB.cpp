#include <bits/stdc++.h>
using namespace std;

int main()
{

	int N,T,c,cnt=0,abs=0,Temp=0;
    
    cin>>N;
    char arr[N][5];
    
    for (int i = 0; i < N; ++i)
    {
    	for (int k = 0; k < 5; ++k)
    	{	
    	    cin>>arr[i][k];
    	}
    }
  
    for (int i = 0; i < N; ++i)
    {
    
    	if (arr[i][0]=='O' && arr[i][1]=='O')
    	{
        	arr[i][0]='+';
    		arr[i][1]='+';
    		Temp=1;
    		break;
    	}
    	else if (arr[i][3]=='O' && arr[i][4]=='O')
    	{
    		arr[i][3]='+';
    		arr[i][4]='+';
    		Temp=1;
    		break;
    	}
    	
    }
    if (Temp==1)
    {
    	cout<<"YES"<<endl;
  
       for (int i = 0; i < N; ++i)
       {
    	   for (int k = 0; k < 5; ++k)
    	   {	
             	cout<<arr[i][k];
    	   }
    	  cout<<endl;
        }
    }
    else
     cout<<"NO"<<endl;


	return 0;
}