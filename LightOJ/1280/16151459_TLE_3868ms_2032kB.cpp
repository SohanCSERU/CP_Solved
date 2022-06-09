#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,D,cnt=0,Temp=0;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&N,&D);
	    double PP[N],MM[N],MI=0,PI=0;
	    double persentage[N],TTY,SD=0;

	 for (int i = 0; i < N; ++i)
	 {
	 	scanf("%lf %lf",&PP[i],&MM[i]);
	 	PI += PP[i];
	 	MI += MM[i];
	    SD = (PP[i] / MM[i])*100.0;
	    persentage[i] = SD;
	 }
	 //cout<<" PI: "<<PI<<" MI: "<<MI<<endl;


	 for (int i = 0; i < D; ++i)
	 {
	 double min = persentage[0];
	 double pi = PP[0],mi=MM[0];
	 int to1=0;
	 	for (int k = 1; k < N; ++k)
	 	{				
	    	if(persentage[k] < min)
	    	{
	    		min = persentage[k];
	    		pi = PP[k];
	    		mi = MM[k];
	    		to1 = k;
	    	}
	 	}
	 	persentage[to1] = 1001.0;
	 	PI -= pi;
	 	MI -= mi;
	 }
	 double ans=0;
	  //cout<<" PI: "<<PI<<" MI: "<<MI<<" AND persentage is: "<<(PI/MI)*100.0<<endl;
	  ans = (PI/MI)*100.0;
	  printf("Case %d: %0.9lf\n", ++cnt,ans);

	}
	return 0;
}