#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long int cnt=0,T,N=0,M,Temp=0,Number,Div;
   char SS[250],hint;
   cin>>T;
   while(T--)
   {
      cin>>SS;
      cin>>Number;
      if(Number < 0)
      { 
      	Number= Number*-1;
      }
      if(Number!=0)
      {
      M = strlen(SS);
	      for (int i = 0; i < M ;i++)
	      {
	      	if (SS[i]=='-')
	      	{
	      	   continue;
	      	}
	      	else 
	      	{
	           
	           N=SS[i]-'0';
	           Temp=Temp*10+N;
	           Temp=Temp%Number;
	      	}
	      	//cout<<"At The Loop:"<<i<<" Temp is :"<<Temp<<endl;
	      }
     }
     else
     {
      Temp=1;
     }     
         if (Temp==0)
      	{
      		cout<<"Case "<<++cnt<<": "<<"divisible"<<endl;
      	}
      	else 
      	cout<<"Case "<<++cnt<<": "<<"not divisible"<<endl;
    
    Temp=0;
   }
	return 0;
}