#include<iostream>
using namespace std;

int main()
{
    int a=0,T,k;
    cin>>T>>k;
    for(int i=1;i<T;i++){
      if(T*i%10==0 || T*i%10==k){
        a=i;
        break;
      }
    }
    cout<<a<<endl;

    return 0;
}
