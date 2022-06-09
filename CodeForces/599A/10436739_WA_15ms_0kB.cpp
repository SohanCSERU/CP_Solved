#include<iostream>
using namespace std;

int main()
{
	int d1,d2,d3;
	int a,b,x;
	cin>>d1;
	cin>>d2;
	cin>>d3;
	 //cout << min(d1*2+d2*2,min(d1+d3+d2,min(d1*2+d3*2,d2*2+d3*2))) << endl;
	if(d3>=d1+d2){
		x=2*(d1+d2);
	}
		else if(d3<d1+d2)
			x=d1+d2+d3;
		  else if(d2>=d1+d3)
		    x=2*(d1+d2);   
		    else if(d1>=d2+d3)
		      x=2*(d3+d2);
		      else x=0;
	cout<<x<<endl;
	return 0;
	
}