#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int aa=0,bb=0,M,N,T,tty=0,mul=1,cnt=0,Temp=0;
    cin>>T;
    while(T--)
    {
      scanf("%d %d",&M,&N);
      if(N>M)
      {
       Temp=N;
        N=M;
        M=Temp;
      }

      //cout<<"After Swap : "<<M<<" "<<N<<endl;
      bb=M*N;

     if(N==1) tty = M; 
       else if(N==2) 
       {
          if(M%4==1) tty=M+1;
          else
          { 
            if(M%4==0) tty=M;
            else
             tty=M+(4-(M%4));
          }     
       }
       else
       {
         if(bb%2==0) tty=(bb/2);
         else 
           tty=(bb/2)+1;
       }
      
      printf("Case %d: %d\n",++cnt,tty);
      //cout<<"Case "<< ++cnt <<": "<<tty<<endl;   
     mul=1,aa=0,tty=0;
    }
 
  return 0;
}
        