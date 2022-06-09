#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,TQ,Temp=0,cnt=0;
    char keyword[100],aa[100];

    cin>>T;
    while(T--)
    {
      stack<string >Back_ward;
      stack<string >forwd;
    
        Back_ward.push("http://www.lightoj.com/");
        cout<<"Case "<< ++cnt <<":"<<endl;
        int check=0;
        while(1)
        {
          scanf("%s",keyword);
          if(keyword[0]=='Q')
          {
            break;
          }
          else
          {
             if(keyword[0]=='V')
             {
               scanf("%s",aa);
               Back_ward.push(aa);
               printf("%s\n",aa);
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
                 printf("Ignored\n");
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
                  
                 else printf("Ignored\n");
             }
          }
        }
    }
   return 0;
}