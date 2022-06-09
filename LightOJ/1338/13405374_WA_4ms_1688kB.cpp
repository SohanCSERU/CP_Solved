#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
    int T,N,k,L1,L2,aa=0,sum=0,cnt=0;
    char machaing[100],ch;
    string Name,opp;

    cin>>T;
    getchar();

    while(T--)
    {
       getline(cin,Name);
       getline(cin,opp);
	     
      string aaa="",bbb="";
      L1=Name.length();
      L2=opp.length();

      for (int i = 0; i <L1; ++i)
      {
      	 ch=Name[i];
         if(Name[i]==' ') 
          continue;
         if(ch>='A' && ch<='Z')
         {
          Name[i]=ch+32;
         }
        aaa=aaa+Name[i];
      }
      

      for (int i = 0; i <L2; ++i)
      {
      	 ch=Name[i];
         if(Name[i]==' ')  continue;
         
         if(ch>='A' && ch<='Z')
         {
          Name[i]=ch+32;
         }
        bbb=bbb+opp[i];
      }
     
     sort(aaa.begin(),aaa.end()); 
     sort(bbb.begin(),bbb.end());

     cout<<"Case "<< ++cnt<<": ";
     
     if(aaa==bbb)
     	cout<<"Yes"<<endl;
     else 
     	cout<<"No"<<endl;

    }
	return 0;
}
