#include<iostream>
using namespace std;
int main(){
    int T,N,a1,a2,b1,b2,c1,c2,d1=0,d2=0,temp=0,cnt=0,area=0,tty=0;
    cin>>T;
    while(T--){
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
    d1=(b1-c1);d2=(b2-c2);
    d1=a1-d1;d2=a2-d2;
    
    temp = (a1*b2+b1*c2+c1*a2);
    cnt = (a2*b1+b2*c1+c2*a1);
    area=temp-cnt;
    if(area<0) area*=-1;
    //cout<<"This is the D: "<<d1<<" "<<d2<<endl;
    cout<<"Case "<<++tty<<": "<<d1<<" "<<d2<<" "<<area<<endl;
    
    }

    return 0;
}