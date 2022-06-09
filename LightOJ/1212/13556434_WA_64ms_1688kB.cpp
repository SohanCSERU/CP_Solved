#include <iostream>
#include <bits/stdc++.h>
#include <deque>
using namespace std;
 
int main()
{
    int a,b,M,N,T,cnt=0,Temp=0,siz,length;
    string aa,bb,cc;
 
    cin>>T;
    while(T--)
    {
       cin>>siz>>length;
      deque<int >V;
 
      while(length--)
      {
        cin>>aa;
        if(aa=="pushLeft" || aa=="pushRight")
        {
            cin>>N;
            if(V.size()==siz)
            {
                cout<<"The queue is full"<<endl;
            }
            else
            {
               if(aa=="pushLeft")
               {
                cout<<"Pushed in left: "<<N<<endl;
                V.push_front(N);
               }
               else
               {
                  if(aa=="pushRight")
                  {
                    cout<<"Pushed in right: "<<N<<endl;
                    V.push_back(N);
                  }
               }
            }
        }
        if(aa=="popLeft" || aa=="popRight")
        {
          if(V.size()==0)
          {
            cout<<"The queue is empty"<<endl;
          }
          else
          {
             if(aa=="popLeft")
             {
               cout<<"Popped from left: "<<V.front()<<endl;
               V.pop_front();
             }
             if(aa=="popRight")
             {
               cout<<"Popped from right: "<<V.back()<<endl;
               V.pop_back();
             }
          }
 
        }
 
      }
      V.clear();
   }
    return 0;
}