#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,N,T,cnt=0,Temp=0;	
    int excess;
    cin>>T;
    while(T--){
        cin>>a>>b>>c>>d>>e>>f>>N;
    int arr[N];
    arr[0]=a,arr[1]=b,arr[2]=c;
    arr[3]=d,arr[4]=e,arr[5]=f;
    
     for(int l=0;l<6;l++)
         Temp+=arr[l];
    
       arr[6]=Temp;
      
     for(int a=6;a<N;a++){
           arr[a+1]=(arr[a]*2 - arr[a-6])%10000007;
           //cout<<"Test: "<<arr[a]<<endl; 
       }
     cout<<"Case "<< ++cnt <<": "<< arr[N]<<endl;  
    Temp=0;
    } 

    return 0;
}