#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

    char abs[5];
    long long int N;
     int cnt=0,tmp=0,T;
    cin>>T;
    
    while(T--){
        cin>>N>>abs;
    while(N != 0){
     if(abs[0]=='A'){
     	 if(N==1)
           cout<<"Case "<< ++cnt<<": "<<"Bob\n";
         else if(N==2) 
            cout<<"Case "<< ++cnt<<": "<<"Alice\n";
        else if(N%2==0) 
            cout<<"Case "<< ++cnt<<": "<<"Bob\n";
     	else 
           cout<<"Case "<< ++cnt<<": "<<"Alice\n";
     }
     else if(abs[0]=='B'){
        if(N<=2)
           cout<<"Case "<< ++cnt<<": "<<"Bob\n";
           
           else if(N%2==1) 
              cout<<"Case "<< ++cnt<<": "<<"Bob\n";
             else 
                cout<<"Case "<< ++cnt<<": "<<"Alice\n";
       }

     } 
}

	return 0;
}