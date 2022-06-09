#include<iostream>
using namespace std;

int main(){
    unsigned long long int an=0,T,N,cnt=0;
   cin>>T;
   for(int l=1;l<=T;l++){
      cin>>N;an=N;
        while(N !=0){
           if(N%2==0) N=N/2;
              else {N/=2;cnt++;}
         //cout<<"Cnt : "<<cnt<<" "<<N<<endl;      
        }
       if(cnt%2==0) 
          cout<<"Case "<<l<<": "<<"even\n";
         else 
           cout<<"Case "<<l<<": "<<"odd\n";
    cnt=0;
   }

    return 0;
}