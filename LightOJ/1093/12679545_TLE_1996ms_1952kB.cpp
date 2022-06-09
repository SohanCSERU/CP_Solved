#include<iostream>
using namespace std;

int main(){

	int T,N,forget,p;
	cin>>T;
	for(p=1;p<=T;p++){
	    cin>>N>>forget;
	 int arr[N],x,temp=0,cnt=0,tty=0;
	  
	  for(int i=0;i<N;i++) cin>>arr[i];
	  
	  for(int j=0;j<N;j++){x=0;
	     while(x<forget && j+x<N){
	          temp=arr[j+x]-arr[1+x];
	          
	          if(temp<0){ temp=temp*-1;}
	          tty=temp;
	          //cout<<j<<" "<<x<<" Temp:"<<temp<<endl;
	          if(temp>cnt){
	             cnt=temp;x++;
	             //cout<<"J value : "<<j<<" biggest : "<<cnt<<endl;
	          }
	      }  
           
        }
        cout<<cnt<<endl; 
        cnt=0;
	  }
	
    return 0;	
}