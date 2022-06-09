#include <iostream>
using namespace std;

int main()
{
	int a,b,c,M,N,T,tty=0,abs,cnt=0;
    cin>>T;
    while(T--)
    {
      cin>>N;
      char Name[N][50];
      int Max=0,Min=99999;
      string aa,bb;
       
        for(int i=0;i<N;i++)
        {
          cin>>Name[i];
          cin>>a>>b>>c;
          tty=a*b*c;
	         
	         if(Max<tty)
	         {
	         	  Max=tty;aa=Name[i];
	         }
	         if(Min>tty)
	         {
	         	  Min=tty;bb=Name[i];
	         } 
       }
       if(Min != Max)
       cout<<"Case "<< ++cnt <<": "<<aa<<" took chocolate from "<<bb<<endl;
      else
        cout<<"Case "<< ++cnt <<": "<<"no thief"<<endl;   
    }
 
	return 0;
}