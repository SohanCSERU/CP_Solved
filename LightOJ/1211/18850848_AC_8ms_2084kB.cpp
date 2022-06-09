#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,M,p,q,Xx=0,aa=0,Temp=1;
    cin>>T;
    while(T--)
    { 
       cin>>N;
     int stor[N][6],max[3],min[3],ttt=0,cnt=0,abc=999999;

       for(int i=0;i<N;i++)
       {
         for (int k=0;k<6;k++)
         {
           cin>>stor[i][k];	
         }
       }

       for(int i=0;i<3;i++)
       {
         for (int k=0;k<N;k++)
         {
          	if(stor[k][i]>ttt)
          	{
         	   ttt=stor[k][i];
          	}
         }
         min[i]=ttt;
         //cout<<"first is : "<<ttt<<endl;
         ttt=0;
       }
       
       for(int i=3;i<6;i++)
       {
         for (int k=0;k<N;k++)
         {
          	if(stor[k][i]<abc)
          	{
         	   abc=stor[k][i];
          	}
         }
         max[cnt++]=abc;
         //cout<<"Second is : "<<abc<<endl;
         abc=999999;
       }
      
      for (int i = 0; i < 3; i++)
      {
      	if(min[i]>= max[i]){
      	  Temp=0;break;
      	}

        else
      	 Xx=max[i]-min[i]; 
          Temp *=Xx;
      }
     cout<<"Case "<< ++aa <<": "<<Temp<<endl;
       /*while Loop Finished.*/   
       Temp=1;    
    }

	return 0;
}