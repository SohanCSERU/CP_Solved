#include <bits/stdc++.h>
using namespace std;

int main(){

     int a,b,c,d,e,f,rem=0,cnt=0,T,N=1,Temp=0;
     int arr[4],abs[4];
     char p,q,r;
     cin>>T;
     
      for(int w=1;w<=T;w++){
       scanf("%d %c %d %c %d %c %d",&arr[0],&p,&arr[1],&q,&arr[2],&r,&arr[3]);
       scanf("%d %c %d %c %d %c %d",&abs[0],&p,&abs[1],&q,&abs[2],&r,&abs[3]); 
       // cin>>abs[0];
         
         for(a=0;a<4;a++)
         {
           while(abs[a] != 0)
           {
              rem=abs[a]%10;
              abs[a]=(abs[a]-rem)/10;
           
              Temp+=rem*N;
              N=N*2;
           }
            if(arr[a]==Temp) cnt=0;
              else 
              {
                cnt=1;
                break;
              }    
        //cout<<"Ans is: "<<Temp<<" Hight cnt is: "<<cnt<<endl;
            Temp=0,N=1;
          }

        if(cnt==1) cout<<"Case "<<w<<": "<<"No\n";
           else cout<<"Case "<<w<<": "<<"Yes\n";     
 
   Temp=0,N=1; 
}

    return 0;
}
