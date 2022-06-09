#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,TQ,Temp=0,cnt=0;
    string keyword,aa,bb,cc;

    cin>>T;
    while(T--)
    {
      stack<string >Back_ward;
      stack<string >forwd;
    
        Back_ward.push("http://www.lightoj.com/");
        cout<<"Case "<< ++cnt <<": "<<endl;
        int check=0;
        while(1)
        {
          cin>>keyword;
          if(keyword[0]=='Q')
          {
            break;
          }
          else
          {
             if(keyword[0]=='V')
             {
               cin>>aa;
               Back_ward.push(aa);
               cout<<aa<<endl;
               if(forwd.size()!=0)
               {
                 while(forwd.size()!=0)
                 {
                  forwd.pop();
                 }
               }
             }
             else if(keyword[0]=='B')
             {
                forwd.push(Back_ward.top());
                Back_ward.pop();
                
                if(Back_ward.size()!=0)
                {  
                  cout<<Back_ward.top()<<endl;
                }
                else
                {
                 cout<<"Ignored"<<endl;
                 Back_ward.push(forwd.top());
                 forwd.pop();
                }
             }
             else if(keyword[0]=='F')
             {
                 if(forwd.size()!=0)
                 {
                    cout<<forwd.top()<<endl;
                    Back_ward.push(forwd.top());
                    forwd.pop();
                 }
                  
                 else cout<<"Ignored"<<endl;
             }
          }
        }
    }
   return 0;
}