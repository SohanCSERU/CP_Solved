#include <iostream>
using namespace std;

int main()
{
   int Test,N,M,tty=0,cnt=0;
   cin>>Test;
    tty=(Test/2)+1;
    cnt=Test-tty;
    
    for (int i = 1; i <= tty; i++){
    
    	for (int k = 1; k <=Test; k++){
    	    if(k<= tty-i || (k-tty)>=i)
    	      cout<<"*";
    	   else 
    	   	cout<<"D";
    	}
    	cout<<endl;
    }
    for (int i = 1; i <=cnt; i++){
    
    	for (int k = 1; k <=Test; k++){
    	    if(k<= i || k>(Test-i))
    	      cout<<"*";
    	   else 
    	   	cout<<"D";
    	}
    	cout<<endl;
    }

	return 0;
}