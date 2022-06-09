#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
	int a,b,c,D1=0,D2=0,Test,TTY,XY,cnt=1,HS=0,Rx,Ry,M,N;
	cin>>Test;

	while(Test-- ){
       cin>>Rx>>Ry>>M>>N>>XY;
       char abs[XY+1];

       cin>>abs;

       for (int i = 0; i < strlen(abs); i++){
       	   if(abs[i]=='U') D2++;
           else if(abs[i]=='D') D2--;
           else if(abs[i]=='L') D1--;
           else if(abs[i]=='R') D1++;  
       }
       //cout<<"D1 and D2 Value: "<<D1<<" "<<D2<<endl;

       
       if( D1 == M && D2 == N)
        	 printf("Case %d: REACHED\n",cnt++);

       else if((D1<0 || D1>Rx) || (D2<0 || D2>Ry))
       	  printf("Case %d: DANGER\n",cnt++);
       
       else
       	printf("Case %d: SOMEWHERE\n",cnt++);
     D1=0,D2=0;
	}


	return 0;
}