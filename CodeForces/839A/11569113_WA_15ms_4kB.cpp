#include<iostream>
using namespace std;

int main()
{
    int T,k=0,N,m,n,cnt=0,flag=0;
    cin>>N>>T;
    int abs[N];
    for(int i=0;i<N;i++)
        cin>>abs[i];

    while(T>0){
        for(int i=0;i<N;i++){
            if((k+abs[i])>=8){
                T=T-abs[i];cnt++;
                k=abs[i]-8;
            }
            else if((k+abs[i])>0){
                T=T-abs[i];cnt++;
            }
        }
    }
    cout<<cnt<<endl;


    return 0;
}
