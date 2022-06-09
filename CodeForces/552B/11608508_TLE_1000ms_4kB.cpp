#include<iostream>
using namespace std;
int abs(int i){
 int cnt=0;
 while(i>0){
        i=i/10;
        cnt++;
       }
    return cnt;
}
int main()
{
    int i,a,b,N,T,sum=0,cnt=0;
    cin>>N;
    for(i=1;i<=N;i++){
     sum += abs(i);
    }
    cout<<sum<<endl;


    return 0;
}
