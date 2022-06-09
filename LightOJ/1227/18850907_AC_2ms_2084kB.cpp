#include<iostream>
using namespace std;

int main(){
	
	int abs,N,T,wik=0,Tpa=0,max=0,sum=0;
    int age,capacity,weight;
	cin>>T;
    while(T--){
    	cin>>age>>capacity>>weight;
	int arr[age];
	    for(int i=0;i<age;i++) 
	    	cin>>arr[i];
	    
	        for(int a=0;a<age;a++){
	           Tpa+=arr[a];wik++;
			   if(wik<=capacity && Tpa<=weight){
			   	    if(max<wik){
			   	    	max=wik;
					}
			   }
			   else{
			   	Tpa=0,wik=0;
			   }
                 //cout<<"FOR a= "<<a<<" "<<max<<" "<<Tpa<<endl;
	        }
	        cout<<"Case "<< ++sum <<": "<<max<<endl;
	    //cout<<"What is :"<<Tpa<<" "<<wik<<" "<<max<<endl;
	 wik=0,max=0,Tpa=0;       
	}
	
	return 0;
}