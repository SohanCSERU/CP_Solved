#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long long int T,cnt=0;
    long long N,k,a,Excl=0,sum=0,row=0,col=0;
    cin>>T;
    for(k=1;k<=T;k++){
      cin>>N;    
     long long int i,j;
    a = sqrt(N); cnt=a*a;
    
      if(cnt==N){ Excl= a*a-(a-1);}
        else {Excl=(a+1)*(a+1)-a;a=a+1;}
             
       if(Excl>N){
          col=a;i=Excl-N;
           row= a-i;
       }
       else if(Excl<N){
          row=a;i=N-Excl;
           col= a-i;
        }
        else {row=a;col=a;}
     if(a%2==0) cout<<"Case "<<k<<": "<<row<<" "<<col<<endl;
       
       else cout<<"Case "<<k<<": "<<col<<" "<<row<<endl;
        
       a=0,i=0,col=0,Excl=0,row=0,N=0,cnt=0;
        }
    
    return 0;
}