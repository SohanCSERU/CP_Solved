   #include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int num,N,cnt=0,Temp=0;
    int top=0,abs=0,T;
    scanf("%d",&T);

    while(T--)
    {
      scanf("%lld",&num);
	        
      int sqr=sqrt(num);
      
	    for (int i = 1; i <=sqr; i++)
	    {
	     	if(num%i==0)
	     	{
	     	    top+=2;
	     	}
	    }

	    double XX;
	    XX = sqrt(num);
	    if(XX==sqr) top--;

       printf("Case %d: %d\n",++abs,top-1);
       //cout<<"Case "<< ++abs <<": "<<cnt-1<<endl;	
        top=0;
    }
	return 0;
}	