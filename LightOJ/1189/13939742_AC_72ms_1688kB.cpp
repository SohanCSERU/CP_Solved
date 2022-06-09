#include <bits/stdc++.h>
using namespace std;
 long long int Hold[25],Temp=0;

void factorial(void)
{
    Hold[0]=1,Hold[1]=1;
     long long int abs=1;
	for (int i = 2; i <21;i++)
    {
    	Temp+=abs*i;
    	abs=Temp;
    	Hold[i]=Temp;
    	Temp=0;
    	//cout<<Hold[i]<<endl;
    }
}

int main()
{
     long long int check=0,N,Z=0,tty=0;
    int cnt=0,T,Temp;
    factorial();
    scanf("%d",&T);
    while(T--)
    {
        stack<int >art;
        scanf("%lld",&N);
      for(int i=0;i<21;i++)
      {
      	  //cout<<"Value is "<<Hold[i]<<endl;
          if(Hold[i]>N)
          {
              //cout<<"Value is "<<Hold[i]<<" breaked Position is: "<<i<<endl;
              tty=i-1;
           break;
          }
      }
      //cout<<"The Tty is : "<<tty<<endl;
      for (int k = tty; k>=0 ;k--)
      {
      	Z+= Hold[k];

      	if(Z==N)
      	{
      		art.push(k);
           check=1;break;
      	}
          if(Z<N)
          {
             art.push(k);
          }
          if(Z>N)
          {
            Z=Z-Hold[k];
          }
      	//cout<<"Here is the Number is : "<<Hold[k]<<endl;
      }
      printf("Case %d: ",++cnt);
      //cout<<"Case "<< ++cnt <<": ";
      if(check==1)
      {
        while(art.size()!=0)
        {
        	Temp=art.top();
        	art.pop();
      	   if(art.size()==0)
      	   {
      	   		printf("%d!",Temp);
      	   		//cout<<Temp<<"!";
      	   }
      	   else
      	   	printf("%d!+",Temp);
     	      //cout<<Temp<<"!+";
        }
        cout<<endl;
      }
      else
      	printf("impossible\n");
      //cout<<"impossible"<<endl;
         
      Z=0,check=0,tty=0;
    }

	return 0;
}
