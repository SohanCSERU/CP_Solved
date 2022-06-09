#include<iostream>
using namespace std;

int main()
{
	int d1,d2,d3;
	int a,b,x;
	cin>>d1;
	cin>>d2;
	cin>>d3;
	if(d3>=d1+d2){
		x=2*(d1+d2);
	}
		if(d3<d1+d2)
			x=d1+d2+d3;
		  if(d2>=d1+d3)
		    x=2*(d1+d2);   
		    if(d1>=d2+d3)
		      x=2*(d3+d2);
					
	cout<<x<<endl;
	return 0;
	
}