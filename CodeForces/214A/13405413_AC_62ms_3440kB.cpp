#include <iostream>
using namespace std;

int main()
{
	int a,b,M,N,tty=0,abs;
    cin>>N>>M;
     
	for (int i = 0; i <=N; i++)
	{
	  for (int k = 0; k <=M; k++)
	  {
	     if( i*i+k ==N && i+k*k==M)
	        tty++;  	
	  }
	}
	cout<<tty<<endl;

	return 0;
}