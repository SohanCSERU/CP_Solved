#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int HS[1005];
 
 
void func(void ){
   
   int a,b,c,T=0,cnt=0,Temp=1,tty=0;
   int arr[1005];
   double check=0;
   arr[0]=1,HS[0]=1;
    for(int i=2;i<=1000;i++){
       for(int k=2;k<=sqrt(i);k++){
          if(i%k==0) cnt++;
          T=k;
      }
     
      cnt=cnt*2;
        check=sqrt(i);
          if(check==T)
          cnt--;
      //cout<<"For "<<i<<" "<<cnt<<endl;    
      arr[i-1]=cnt+2;
        cnt=0;
  }
 
   
     for(int l=2;l<=33;l++){
       for(int i=999;i>=0;i--){
          if(arr[i]==l){
          HS[Temp]=i+1;
          Temp++;
          tty=i;
       }
    }
    //cout<<"For L : "<<l<<" "<<tty+1<<endl;
 
  }
 
 
 
 
    //for(int a=0;a<n;a++)
     //cout<<"For the NUM: "<< a+1 <<" Divisors: "<<HS[a]<<endl;
    //return HS[n-1];
 }
   
 
int main()
{
   int input,Test,cnt=0,sum=0;
   cin>>Test;
     while(Test--){
      func();
      cin>>input;
      //sum = func(input);
     cout<<"Case "<< ++cnt <<": "<<HS[input-1]<<endl;
}
    return 0;
}