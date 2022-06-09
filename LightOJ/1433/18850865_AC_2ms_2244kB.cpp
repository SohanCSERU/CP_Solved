#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
   double N,a,b,c,Ox,Oy,Ax,Ay,Bx,By,Temp=0,wik=0;
   int T,cnt=0; 
   
   cin>>T;
   while(T--){
     cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
  
       a=(Ox-Ax)*(Ox-Ax) + (Oy-Ay)*(Oy-Ay);
       b=(Ax-Bx)*(Ax-Bx) + (Ay-By)*(Ay-By);
     
      wik=1-b/(2*a);
      Temp =sqrt(a)*acos(wik);
      std::cout<<std::fixed;
      std::cout<<std::setprecision(8);
      cout<<"Case "<< ++cnt <<": "<<Temp <<endl;
      
     //cout<<"Value is : "<<wik<<" Arc= "<<sqrt(a)*Temp<<" "<<Temp<<endl;

    }

    return 0;
}
