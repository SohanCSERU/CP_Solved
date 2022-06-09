#include <bits/stdc++.h>
using namespace std;

char lower(char ax)
{
	if(ax<= 'Z' && ax>='A')
	{
		return ax-('Z'-'z');
	}
	return ax;
}

int convert(char ch)
{
	char aT = lower(ch);
	int ab=0,tmp=0;
	ab =  aT - 96;
	//cout<<ab<<endl;
	return ab; 
}

int Fraction(int as)
{
	int co=0,aT=0;
	while(as != 0)
	{
		co = as%10;
		as = as/10;
		aT +=co; 
		if(aT >= 10){
		 as=aT;
		 aT =0;
		}
	}
	return aT;
}

int main()
{
	int T,N,cnt=0,Temp1=0,Temp2=0;
	string abs,tt,pk;
	cin>>abs>>pk;

	
	for (int i = 0; i < abs.size(); ++i)
	{
		if(abs[i] >= 'A' && abs[i]<='z')
		{
		 cnt = convert(abs[i]);
		 Temp1 += cnt;
		}
		else continue;
	}

		for (int i = 0; i < pk.size(); ++i)
		{
			if(pk[i] >= 'A' && pk[i]<='z')
			{
			 cnt = convert(pk[i]);
			 Temp2 += cnt;
			}
			else continue;
		}
	double r1 = Fraction(Temp1)*1.0;
	double r2 = Fraction(Temp2)*1.0;
	double ab=0,ac=0;

	if(r1 > r2)
	{
	    ab = (r2/r1)*100.0;
	}
	else if(r1 < r2)
	{
	    ab = (r1/r2)*100.0;
	}
	else if(r1==r2) ab = 1;

	if(ab==1) printf("100 ");
	else
		printf("%0.2lf ",ab);

	cout<<"%"<<endl;

	return 0;
}