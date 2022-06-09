#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int T,N,abs=0,cnt=0,Test=1;
   char str[12];
   //bool true,false;
   
   scanf("%d",&T);
   while(T--){
     scanf("%s",str);
     abs = strlen(str);
      //cout<<"strlen is= "<<abs<<endl;

         for(int a=0; a <abs/2 ;a++)
            if(str[a] != str[abs-a-1]){
                 Test=0;
		        // cout<<str[a]<<endl;
                 break;
            }

      if(Test==0) 
        printf("Case %d: No\n",++cnt);
         //cout<<"Case "<< ++cnt <<": "<<"No\n";
        else
          printf("Case %d: Yes\n",++cnt);
         //cout<<"Case "<< ++cnt<<": "<<"Yes\n";     
       Test=1;
     }
    return 0;
}
