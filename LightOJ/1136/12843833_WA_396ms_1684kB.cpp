#include<iostream>

using namespace std;

int main(){

    long long int input,Test,begi,en,T,N=0,M=0,Temp=0,cnt=0;
    cin>>Test;
    while(Test--){
      cin>>begi>>en;
     N=begi/3;
     if(begi%3 != 0) N++;
     M=en/3;
     if(en%3 != 0) M++;
	//cout<<"THe N AND M is :"<<M<<" "<<N<<endl;
     Temp =(en-begi)-(M-N);
     if(begi%3==0) Temp++;

     cout<<"Case "<< ++cnt <<": "<<Temp<<endl;
    }

    return 0;
}