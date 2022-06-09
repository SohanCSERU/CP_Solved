#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int T,N,TQ,Temp=0,cnt=0;
    string keyword,aa,bb,cc;
 
    cin>>T;
    while(T--)
    {
     stack<string >Back,forward;
     Back.push("http://www.lightoj.com/");
        cout<<"Case "<< ++cnt <<":"<<endl;
        
        int check=0;
        while(1)
        {
          cin>>keyword;
          if(keyword=="VISIT")
          {
            cin>>aa;
            Back.push(aa);
            cout<<aa<<endl;
            while(forward.size()!=0)
            {
                forward.pop();
            }
            check++;
          }
          else if(keyword=="BACK")
          {
 
            if(Back.size()==0 || check==0)
                cout<<"Ignored"<<endl;
            else
            {
              forward.push(Back.top());
              Back.pop();
 
              if(Back.size()==0)
                   cout<<"Ignored"<<endl;
              else
              {
              cout<<Back.top()<<endl;
              //forward.push(Back.top());
              }
            }
          }
          else if(keyword=="FORWARD")
          {
            if(forward.size()==0)
                cout<<"Ignored"<<endl;
            else
            {
                if(Back.size()==0)
                {
                 Back.push(forward.top());
                 forward.pop();
                }
               if(forward.size()==0)
                   cout<<"Ignored"<<endl;
               else
               {
                cout<<forward.top()<<endl;
                Back.push(forward.top());
                forward.pop();
               }
            }
          }
          else if(keyword=="QUIT")
            break;
        }
      Back.clear();forward.clear();
    }
 
    return 0;
}