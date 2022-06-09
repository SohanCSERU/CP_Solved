#include<iostream>
using namespace std;
int main(){
      unsigned long long int R,lot,abs,tty=0,act=0,rem=0;
      unsigned long int T,N,cnt=0;
      cin>>T;
    for(int x=1;x<=T;x++){
      cin>>lot>>R;
     
     /*for(int i=1;i<=lot;i++){
      act=act+i;
    }*/
    //cout<<"First one: "<<act<<endl;
       
    for(int k=lot;k<=R;k++){
    if(k%3==0) tty++;
    if(k%3==2) tty++;
    }
    cout<<"Case "<<x<<": "<<tty<<endl;
    tty=0,act=0,cnt=0,abs=0;
   }

    return 0;
}