#include<iostream>
#include<bits/stdc++.h>
#include<iomanip> 
using namespace std;

int main()
{
     int abs,N,T,cnt=0;
     double R,Exc,r,angle,tty=0;
     cin>>T;
     for(abs=1;abs<=T;abs++){
        cin>>R>>N;
     angle=180.0/N;
     //cout<<angle<<endl;
     Exc=2*acos(0.0);
     
     angle=angle*Exc/180;
     //cout<<angle<<" Exc"<<Exc<<endl;
     //tty=angle;
     tty= sin(angle);
     r= tty*R/(tty+1);
     
     std::cout << std::fixed;
     std::cout << std::setprecision(10);
    
     cout<<"Case "<<abs<<": "<<r<<endl;
     //printf("%0.10lf\n",r);
     
     } 
     
    return 0;     
}