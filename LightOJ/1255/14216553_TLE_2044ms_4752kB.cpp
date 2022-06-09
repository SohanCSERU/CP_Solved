#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,cnt=0,Temp=0,top=0,check=0,cax=0;
    string SS,SUB;

    scanf("%d",&T);
    while(T--)
    {
    	 cin>>SS>>SUB;
    	 //scanf("%s%s",&SS,&SUB);

	    while(top<SS.size() && Temp<SS.size())
	    {

	      for (int i = 0; i < SUB.size(); i++)
	      {
	       	 if(SUB[i]==SS[top++])
	       	 {
	       	 	check=1;
	       	 }
	       	 else 
	       	 {
	       	 	check=0;
	       	 	break;
	       	 }
	      }
	      cnt++;
	      top=cnt;
	      if(check) Temp++;
	    }
	    printf("Case %d: %d\n",++cax,Temp);
	    //cout<<"Case "<< ++cax <<": "<<Temp<<endl;
	    top=0,check=0,Temp=0,cnt=0;
   }
	return 0;
}