#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    char abs[7];
    long long int N;
     int cnt=0,tmp=0,T;
    cin>>T;
    
    while(T--){
        cin>>N>>abs;

     if(abs[0]=='A'){
        if(N%3==0 or N%3==2) 
            cout<<"Case "<< ++cnt<<": "<<"Alice\n";
     	else 
           cout<<"Case "<< ++cnt<<": "<<"Bob\n";
     }
     else if(abs[0]=='B'){
           if(N%3 == 1 or N%3==2) 
              cout<<"Case "<< ++cnt<<": "<<"Bob\n";
             else 
                cout<<"Case "<< ++cnt<<": "<<"Alice\n";
       }

     } 


	return 0;
}
