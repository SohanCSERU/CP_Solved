#include <bits/stdc++.h>
using namespace std;
#define max 1000005
double array[max];

int main()
{
	double sum=0,Y=0.57721566490153286060651209;
	long long int T,N,cnt=0;
	array[0]=0.0;
	for (int i =1; i <=1000000 ; ++i)
	{
		array[i]= array[i-1] +1.0/i;
	}

	cin>>T;
	while(T--)
	{
	   scanf("%lld", &N); 
       
        if(N <= 1000000)
			sum = array[N];
        else
			sum = log(N+0.5) + Y;

        printf("Case %lld: %.10lf\n", ++cnt,sum);
    }
	return 0;
}
