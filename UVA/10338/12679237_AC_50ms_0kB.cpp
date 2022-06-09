#include<iostream>
#include<string>
using namespace std;

int main(){
     
    unsigned long int a,N,T=1,cnt=0;
    string abs;
    cin>>N;
    for(a=1;a<=N;a++){
     cin>>abs;
       for(int i=1;i<=abs.size();i++){
           T=T*i;}
           //cout<<T<<endl;
     for(int j=0;j<abs.size();j++){
        for(int k=j;k<abs.size();k++){
            if(abs[j]==abs[k]){
               cnt++;
            }
        }
        T=T/cnt;
        cnt=0;
     }
        
    cout<<"Data set "<<a<<": "<<T<<endl;
    T=1; 
  }
   return 0;
}