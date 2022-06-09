#include<iostream>
using namespace std;

int main()
{
    int a=0,T,N,sum=0;
    cin>>T>>N;
    int abs[T];

    for(int i=0;i<T;i++){
        cin>>abs[i];sum += abs[i];
        a=i;
    }
    N=N-abs[a];
    int m,n;
    m=(N+1)-sum;
    if((T-1)*10 <= m){
        n=m/5;
    }
     else n=-1;

     cout<<n<<endl;

    return 0;
}

