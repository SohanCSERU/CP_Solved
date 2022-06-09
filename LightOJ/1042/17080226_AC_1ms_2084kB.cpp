#include <bits/stdc++.h>
using namespace std;
#define M 32
int main()
{
	int End,abs=0,cnt=0,sum=0,T,N,tty=0,Zero=0,One=0;
	bool abc[10];
	string xyz;
	cin>>T;
	while(T--)
	{
	   cin>>N;
		End=log2(N)+1;
	    bitset<M>Temp(N);
	    
		for (int i = 0; i <=End; ++i)
		{
			if(Temp[i]==1 && Temp[i+1]==0)
			{
				
			  int T=Temp[i];
				  Temp[i]=Temp[i+1];
				  Temp[i+1]=T;
                
                int ab=0;
			    while(One--)
			    {
			    	Temp[ab]=1;
			    	ab++;
			    }
			    
			    while(Zero--)
			    {
			    	Temp[ab]=0;
			    	ab++;
			    }
			  break;
			}
			else
			{
			  if (Temp[i]==1)
			  	One++;
			  else
                Zero++; 
			}
		}
        int xz=1,abs=0;
	    for (int i =0; i<=End;i++)
		{
           abs+=xz*Temp[i];
            xz*=2;    			
		}

		cout<<"Case "<< ++cnt <<": "<<abs<<endl;
		One=0,Zero=0,abs=0;
    }
	return 0;
}
 