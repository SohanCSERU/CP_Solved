#include <bits/stdc++.h>
using namespace std;
long long int array[1000005];
const int axx=1000003;
typedef long long int LL;

LL Mod(LL Num,LL R)
{
    if(R==1)
        return Num;
      if(R%2==1)
        return (Mod(Num,R-1)*Num)%axx;
      else
      {
         LL res= Mod(Num,R/2);
         return (res*res)%axx;
      }
}

int main()
{
	long long int T,N,R,cnt=0,sum=0,check=0,Temp=0;;
   memset(array,0,sizeof(array));
  array[1]=1;
  for (int i = 2; i < 1000001; ++i)
  {
      array[i]=(i*array[i-1])%axx;
  }

    cin>>T;
    while(T--)
    {
      scanf("%lld %lld",&N,&R);

      if(N<R)
      {
         printf("Case %lld: 0\n",++cnt);
         continue;
      }
      else if(N==R || R==0)
      {
         printf("Case %lld: 1\n",++cnt);
         continue;
      }
      sum=(array[N-R]%axx)*(array[R]%axx)%axx;
      Temp = Mod(sum,axx-2);

      printf("Case %lld: %lld\n",++cnt,Temp);
      //cout<<"Case "<< ++cnt <<": "<<sum<<endl;
    }
	return 0;
}