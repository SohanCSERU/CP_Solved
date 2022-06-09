#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
        
       int T,N,K,i,sum=0,cnt=0;
       string abs;
       cin>>T;
       for(i=1;i<=T;i++){
          
          cin>>N;
          for(int a=0;a<N;a++){
           if(cnt==0) cout<<"Case "<<i<<":"<<endl;
             cin>>abs;
           //cout<<"when i= "<<i<<" AND cnt : "<<cnt<<" ANd a: "<<a<<endl;
           if(abs=="donate"){
               cin>>K;
               
               sum=sum+K;
           }
  
           else if(abs=="report"){
               
               cout<<sum<<endl;
           }
           cnt++;
        }
        cnt=0,sum=0;
     }

    
    return 0;
}