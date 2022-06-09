#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a,b=0,N,T,cnt=0,flag=1;
    int tmp=0;
    cin>>N>>T;
    while(T--){
       string s;
       for(int i=0;i<N;i++)
           cin>>s[i];

       for(int i=0;i<N;i++){
          if(s[i]=='0'){
            cnt++;
            break;
           }
           else if(s[i]=='1'){
              tmp++;
           }
            if(tmp==4){a=cnt;cnt=0;}
       }
       if(cnt>a) b=cnt;else b=a;

    }
    cout<<b<<endl;

    return 0;
}
