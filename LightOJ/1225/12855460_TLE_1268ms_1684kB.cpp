#include<iostream>
using namespace std;

int main()
{
    int T,N,Number,value=0,next=0,cnt=0;
    cin>>T;
    while(T--){
        cin>>N; Number=N;
        while(N != 0){
            value=N%10;
            N=(N-value)/10;
          next=next*10+value*10;
         //cout<<"The value Of N and New Number is: "<<N<<" "<<next<<endl;
        }
        next/=10;
        if(next==Number)
            cout<<"Case "<< ++cnt <<": YES"<<endl;
           else 
		cout<<"Case "<< ++cnt<<": NO\n";
      next=0;
    }

    return 0;
}
