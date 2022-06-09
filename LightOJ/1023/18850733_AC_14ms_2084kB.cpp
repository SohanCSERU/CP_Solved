#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,AA,cnt=0,Temp=0,check=0;
     char abs[27],ch;

     cin>>T;
     while(T--)
     {
        for(int i=65;i<91;i++)
        {
     	  ch=i;
          abs[cnt++]=ch;
        }
       cin>>N>>AA;
       cout<<"Case "<< ++check <<":"<<endl;     
	    do
	    {
	      for (int i = 0; i < N;i++)
	      {
	     	cout<<abs[i];
	      }
	      cout<<endl;
	      Temp++;
	      if(Temp==AA) break;
	    }
	    while(next_permutation(abs,abs+N));
        Temp=0,cnt=0;
     }
	return 0;
}